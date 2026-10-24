#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_001561c8
// Address: 0x1561c8 - 0x1562e0
void entry_001561c8_0x1561c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001561c8_0x1561c8");
#endif

    switch (ctx->pc) {
        case 0x15621cu: goto label_15621c;
        case 0x15624cu: goto label_15624c;
        case 0x156288u: goto label_156288;
        case 0x1562c8u: goto label_1562c8;
        default: break;
    }

    ctx->pc = 0x1561c8u;

    // 0x1561c8: 0x920454fc  lbu         $a0, 0x54FC($s0)
    ctx->pc = 0x1561c8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 21756)));
    // 0x1561cc: 0x30020001  andi        $v0, $zero, 0x1
    ctx->pc = 0x1561ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x1561d0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1561d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1561d4: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x1561d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x1561d8: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1561d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1561dc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1561dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1561e0: 0xa20254fc  sb          $v0, 0x54FC($s0)
    ctx->pc = 0x1561e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 21756), (uint8_t)GPR_U32(ctx, 2));
    // 0x1561e4: 0x920454fc  lbu         $a0, 0x54FC($s0)
    ctx->pc = 0x1561e4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 21756)));
    // 0x1561e8: 0x30020003  andi        $v0, $zero, 0x3
    ctx->pc = 0x1561e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x1561ec: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1561ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1561f0: 0x2402ffe7  addiu       $v0, $zero, -0x19
    ctx->pc = 0x1561f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
    // 0x1561f4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1561f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1561f8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1561f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1561fc: 0xa20254fc  sb          $v0, 0x54FC($s0)
    ctx->pc = 0x1561fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 21756), (uint8_t)GPR_U32(ctx, 2));
    // 0x156200: 0x260254e0  addiu       $v0, $s0, 0x54E0
    ctx->pc = 0x156200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 21728));
    // 0x156204: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x156204u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x156208: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x156208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x15620c: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x15620cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x156210: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x156210u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x156214: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x156214u;
    SET_GPR_U32(ctx, 31, 0x15621Cu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x156214u, 0x15621Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15621Cu;
label_15621c:
    // 0x15621c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x15621cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x156220: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x156220u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x156224: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x156224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x156228: 0x34421048  ori         $v0, $v0, 0x1048
    ctx->pc = 0x156228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4168);
    // 0x15622c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x15622cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x156230: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x156230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x156234: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x156234u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x156238: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x156238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x15623c: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x15623cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x156240: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x156240u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x156244: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x156244u;
    SET_GPR_U32(ctx, 31, 0x15624Cu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x156244u, 0x15624Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15624Cu;
label_15624c:
    // 0x15624c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x15624cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x156250: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x156250u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x156254: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x156254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x156258: 0x34421043  ori         $v0, $v0, 0x1043
    ctx->pc = 0x156258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4163);
    // 0x15625c: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x15625cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x156260: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x156260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x156264: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x156264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x156268: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x156268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x15626c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x15626cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x156270: 0xfe020018  sd          $v0, 0x18($s0)
    ctx->pc = 0x156270u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 2));
    // 0x156274: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x156274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x156278: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x156278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x15627c: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x15627cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x156280: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x156280u;
    SET_GPR_U32(ctx, 31, 0x156288u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x156280u, 0x156288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156288u;
label_156288:
    // 0x156288: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x156288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x15628c: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x15628cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x156290: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x156290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x156294: 0x3442104f  ori         $v0, $v0, 0x104F
    ctx->pc = 0x156294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4175);
    // 0x156298: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x156298u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
    // 0x15629c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15629cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1562a0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1562a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1562a4: 0x3c020a00  lui         $v0, 0xA00
    ctx->pc = 0x1562a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2560 << 16));
    // 0x1562a8: 0x34420070  ori         $v0, $v0, 0x70
    ctx->pc = 0x1562a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)112);
    // 0x1562ac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1562acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1562b0: 0xfe020048  sd          $v0, 0x48($s0)
    ctx->pc = 0x1562b0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 72), GPR_U64(ctx, 2));
    // 0x1562b4: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1562b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1562b8: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x1562b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x1562bc: 0x26050040  addiu       $a1, $s0, 0x40
    ctx->pc = 0x1562bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1562c0: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1562C0u;
    SET_GPR_U32(ctx, 31, 0x1562C8u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1562C0u, 0x1562C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1562C8u;
label_1562c8:
    // 0x1562c8: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x1562c8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1562cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1562ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1562d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1562d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1562d4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1562d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1562d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1562D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1562D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1562E0u;
}
