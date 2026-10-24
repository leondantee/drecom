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

// Function: caseD_0
// Address: 0x143118 - 0x143268
void caseD_0_0x143118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x143118");
#endif

    switch (ctx->pc) {
        case 0x1431dcu: goto label_1431dc;
        case 0x14321cu: goto label_14321c;
        case 0x143264u: goto label_143264;
        default: break;
    }

    ctx->pc = 0x143118u;

    // 0x143118: 0x32a20002  andi        $v0, $s5, 0x2
    ctx->pc = 0x143118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)2);
    // 0x14311c: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x14311Cu;
    {
        const bool branch_taken_0x14311c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14311c) {
            ctx->pc = 0x143268u;
            return;
        }
    }
    ctx->pc = 0x143124u;
    // 0x143124: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x143124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x143128: 0x2443913c  addiu       $v1, $v0, -0x6EC4
    ctx->pc = 0x143128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938940));
    // 0x14312c: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x14312cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x143130: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x143130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x143134: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x143134u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x143138: 0x3c026400  lui         $v0, 0x6400
    ctx->pc = 0x143138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25600 << 16));
    // 0x14313c: 0x34422b16  ori         $v0, $v0, 0x2B16
    ctx->pc = 0x14313cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11030);
    // 0x143140: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x143140u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x143144: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x143144u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x143148: 0x162600  sll         $a0, $s6, 24
    ctx->pc = 0x143148u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 22), 24));
    // 0x14314c: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x14314cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x143150: 0x34438080  ori         $v1, $v0, 0x8080
    ctx->pc = 0x143150u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x143154: 0x831025  or          $v0, $a0, $v1
    ctx->pc = 0x143154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x143158: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x143158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x14315c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x14315cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x143160: 0x3c027d30  lui         $v0, 0x7D30
    ctx->pc = 0x143160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32048 << 16));
    // 0x143164: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x143164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x143168: 0x26030018  addiu       $v1, $s0, 0x18
    ctx->pc = 0x143168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x14316c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x14316cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x143170: 0x3403fffe  ori         $v1, $zero, 0xFFFE
    ctx->pc = 0x143170u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65534);
    // 0x143174: 0x2602001c  addiu       $v0, $s0, 0x1C
    ctx->pc = 0x143174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x143178: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x143178u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x14317c: 0x3c0282d0  lui         $v0, 0x82D0
    ctx->pc = 0x14317cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33488 << 16));
    // 0x143180: 0x34439000  ori         $v1, $v0, 0x9000
    ctx->pc = 0x143180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x143184: 0x26020024  addiu       $v0, $s0, 0x24
    ctx->pc = 0x143184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x143188: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x143188u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x14318c: 0x3403fffe  ori         $v1, $zero, 0xFFFE
    ctx->pc = 0x14318cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65534);
    // 0x143190: 0x26020028  addiu       $v0, $s0, 0x28
    ctx->pc = 0x143190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x143194: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x143194u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x143198: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x143198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x14319c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x14319cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1431a0: 0x3c020b40  lui         $v0, 0xB40
    ctx->pc = 0x1431a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2880 << 16));
    // 0x1431a4: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x1431a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x1431a8: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x1431a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1431ac: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1431acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1431b0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1431b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1431b4: 0x2442ccc8  addiu       $v0, $v0, -0x3338
    ctx->pc = 0x1431b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954184));
    // 0x1431b8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1431b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1431bc: 0x8e110004  lw          $s1, 0x4($s0)
    ctx->pc = 0x1431bcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1431c0: 0x36220040  ori         $v0, $s1, 0x40
    ctx->pc = 0x1431c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)64);
    // 0x1431c4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1431c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1431c8: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1431c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1431cc: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x1431ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x1431d0: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x1431d0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1431d4: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1431D4u;
    SET_GPR_U32(ctx, 31, 0x1431DCu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1431D4u, 0x1431DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1431DCu;
label_1431dc:
    // 0x1431dc: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1431dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x1431e0: 0x24629100  addiu       $v0, $v1, -0x6F00
    ctx->pc = 0x1431e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938880));
    // 0x1431e4: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x1431e4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1431e8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1431e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1431ec: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1431ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1431f0: 0x3c040400  lui         $a0, 0x400
    ctx->pc = 0x1431f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1024 << 16));
    // 0x1431f4: 0x34821048  ori         $v0, $a0, 0x1048
    ctx->pc = 0x1431f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4168);
    // 0x1431f8: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1431f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x1431fc: 0x3c040005  lui         $a0, 0x5
    ctx->pc = 0x1431fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)5 << 16));
    // 0x143200: 0x3482001b  ori         $v0, $a0, 0x1B
    ctx->pc = 0x143200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)27);
    // 0x143204: 0xfe220008  sd          $v0, 0x8($s1)
    ctx->pc = 0x143204u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 2));
    // 0x143208: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x143208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x14320c: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x14320cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x143210: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x143210u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x143214: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x143214u;
    SET_GPR_U32(ctx, 31, 0x14321Cu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x143214u, 0x14321Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14321Cu;
label_14321c:
    // 0x14321c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x14321cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x143220: 0x245190f0  addiu       $s1, $v0, -0x6F10
    ctx->pc = 0x143220u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938864));
    // 0x143224: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x143224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x143228: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x143228u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3E90F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E90F0u, _value); } while (0);
    // 0x14322c: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x14322cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x143230: 0x34421043  ori         $v0, $v0, 0x1043
    ctx->pc = 0x143230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4163);
    // 0x143234: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x143234u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3E90F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E90F4u, _value); } while (0);
    // 0x143238: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x143238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x14323c: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x14323cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
    // 0x143240: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x143240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x143244: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x143244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x143248: 0xfe220008  sd          $v0, 0x8($s1)
    ctx->pc = 0x143248u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 2));
    // 0x14324c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x14324cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x143250: 0x24461614  addiu       $a2, $v0, 0x1614
    ctx->pc = 0x143250u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x143254: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x143254u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x143258: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x143258u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x14325c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x14325Cu;
    SET_GPR_U32(ctx, 31, 0x143264u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x14325Cu, 0x143264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143264u;
label_143264:
    // 0x143264: 0x0  nop
    ctx->pc = 0x143264u;
    // NOP
    ctx->pc = 0x143268u;
}
