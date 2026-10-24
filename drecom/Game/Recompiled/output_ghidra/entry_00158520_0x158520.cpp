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

// Function: entry_00158520
// Address: 0x158520 - 0x15863c
void entry_00158520_0x158520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00158520_0x158520");
#endif

    switch (ctx->pc) {
        case 0x15855cu: goto label_15855c;
        case 0x158598u: goto label_158598;
        case 0x1585d8u: goto label_1585d8;
        case 0x158608u: goto label_158608;
        default: break;
    }

    ctx->pc = 0x158520u;

    // 0x158520: 0x2e430004  sltiu       $v1, $s2, 0x4
    ctx->pc = 0x158520u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x158524: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x158524u;
    {
        const bool branch_taken_0x158524 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x158524) {
            ctx->pc = 0x1584FCu;
            return;
        }
    }
    ctx->pc = 0x15852Cu;
    // 0x15852c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x15852cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x158530: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x158530u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x158534: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x158534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x158538: 0x34421048  ori         $v0, $v0, 0x1048
    ctx->pc = 0x158538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4168);
    // 0x15853c: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x15853cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
    // 0x158540: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x158540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x158544: 0xfe820008  sd          $v0, 0x8($s4)
    ctx->pc = 0x158544u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 2));
    // 0x158548: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x158548u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x15854c: 0x24641614  addiu       $a0, $v1, 0x1614
    ctx->pc = 0x15854cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 5652));
    // 0x158550: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x158550u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x158554: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x158554u;
    SET_GPR_U32(ctx, 31, 0x15855Cu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x158554u, 0x15855Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15855Cu;
label_15855c:
    // 0x15855c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x15855cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x158560: 0xae820010  sw          $v0, 0x10($s4)
    ctx->pc = 0x158560u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
    // 0x158564: 0x3c040400  lui         $a0, 0x400
    ctx->pc = 0x158564u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1024 << 16));
    // 0x158568: 0x34821043  ori         $v0, $a0, 0x1043
    ctx->pc = 0x158568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4163);
    // 0x15856c: 0xae820014  sw          $v0, 0x14($s4)
    ctx->pc = 0x15856cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 2));
    // 0x158570: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x158570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x158574: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x158574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x158578: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x158578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x15857c: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x15857cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x158580: 0xfe830018  sd          $v1, 0x18($s4)
    ctx->pc = 0x158580u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 24), GPR_U64(ctx, 3));
    // 0x158584: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x158584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x158588: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x158588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x15858c: 0x26850010  addiu       $a1, $s4, 0x10
    ctx->pc = 0x15858cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x158590: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x158590u;
    SET_GPR_U32(ctx, 31, 0x158598u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x158590u, 0x158598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158598u;
label_158598:
    // 0x158598: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x158598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x15859c: 0xae820040  sw          $v0, 0x40($s4)
    ctx->pc = 0x15859cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 64), GPR_U32(ctx, 2));
    // 0x1585a0: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x1585a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x1585a4: 0x3443104f  ori         $v1, $v0, 0x104F
    ctx->pc = 0x1585a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4175);
    // 0x1585a8: 0xae830044  sw          $v1, 0x44($s4)
    ctx->pc = 0x1585a8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 3));
    // 0x1585ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1585acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1585b0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1585b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1585b4: 0x3c020a00  lui         $v0, 0xA00
    ctx->pc = 0x1585b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2560 << 16));
    // 0x1585b8: 0x34420070  ori         $v0, $v0, 0x70
    ctx->pc = 0x1585b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)112);
    // 0x1585bc: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1585bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1585c0: 0xfe830048  sd          $v1, 0x48($s4)
    ctx->pc = 0x1585c0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 72), GPR_U64(ctx, 3));
    // 0x1585c4: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1585c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1585c8: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x1585c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x1585cc: 0x26850040  addiu       $a1, $s4, 0x40
    ctx->pc = 0x1585ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
    // 0x1585d0: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1585D0u;
    SET_GPR_U32(ctx, 31, 0x1585D8u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1585D0u, 0x1585D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1585D8u;
label_1585d8:
    // 0x1585d8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1585d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1585dc: 0xae840020  sw          $a0, 0x20($s4)
    ctx->pc = 0x1585dcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 4));
    // 0x1585e0: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x1585e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x1585e4: 0x34431015  ori         $v1, $v0, 0x1015
    ctx->pc = 0x1585e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4117);
    // 0x1585e8: 0xae830024  sw          $v1, 0x24($s4)
    ctx->pc = 0x1585e8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 3));
    // 0x1585ec: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x1585ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1585f0: 0xfe830028  sd          $v1, 0x28($s4)
    ctx->pc = 0x1585f0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 40), GPR_U64(ctx, 3));
    // 0x1585f4: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1585f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1585f8: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x1585f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x1585fc: 0x26850020  addiu       $a1, $s4, 0x20
    ctx->pc = 0x1585fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x158600: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x158600u;
    SET_GPR_U32(ctx, 31, 0x158608u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x158600u, 0x158608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158608u;
label_158608:
    // 0x158608: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x158608u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x15860c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x15860cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x158610: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x158610u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x158614: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x158614u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x158618: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x158618u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15861c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15861cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x158620: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x158620u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x158624: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x158624u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x158628: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x158628u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15862c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15862cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x158630: 0x27bd0210  addiu       $sp, $sp, 0x210
    ctx->pc = 0x158630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x158634: 0x3e00008  jr          $ra
    ctx->pc = 0x158634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158634u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15863Cu;
}
