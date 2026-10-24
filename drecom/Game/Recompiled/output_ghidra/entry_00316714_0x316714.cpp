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

// Function: entry_00316714
// Address: 0x316714 - 0x3167a4
void entry_00316714_0x316714(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00316714_0x316714");
#endif

    switch (ctx->pc) {
        case 0x316724u: goto label_316724;
        case 0x316770u: goto label_316770;
        default: break;
    }

    ctx->pc = 0x316714u;

    // 0x316714: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x316714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x316718: 0x8c4402d0  lw          $a0, 0x2D0($v0)
    ctx->pc = 0x316718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x31671c: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x31671Cu;
    SET_GPR_U32(ctx, 31, 0x316724u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x316724u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x316724u) { return; }
    ctx->pc = 0x316724u;
label_316724:
    // 0x316724: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x316724u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x316728: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x316728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x31672c: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x31672cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x316730: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x316730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x316734: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x316734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x316738: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x316738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x31673c: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x31673cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x316740: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x316740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x316744: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x316744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x316748: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x316748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x31674c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x31674cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x316750: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x316750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x316754: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x316754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x316758: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x316758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x31675c: 0x8c8402d0  lw          $a0, 0x2D0($a0)
    ctx->pc = 0x31675cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x316760: 0x8c6502d0  lw          $a1, 0x2D0($v1)
    ctx->pc = 0x316760u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x316764: 0x24460104  addiu       $a2, $v0, 0x104
    ctx->pc = 0x316764u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 260));
    // 0x316768: 0xc040d62  jal         func_103588
    ctx->pc = 0x316768u;
    SET_GPR_U32(ctx, 31, 0x316770u);
    ctx->pc = 0x103588u;
    {
        ctx->pc = 0x316770u;
        ps2_stubs::sceVu0RotMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x316770u) { return; }
    ctx->pc = 0x316770u;
label_316770:
    // 0x316770: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x316770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x316774: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x316774u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x316778: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x316778u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x31677c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x31677cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x316780: 0x108300a3  beq         $a0, $v1, . + 4 + (0xA3 << 2)
    ctx->pc = 0x316780u;
    {
        const bool branch_taken_0x316780 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x316780) {
            ctx->pc = 0x316A10u;
            return;
        }
    }
    ctx->pc = 0x316788u;
    // 0x316788: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x316788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31678c: 0x1083005b  beq         $a0, $v1, . + 4 + (0x5B << 2)
    ctx->pc = 0x31678Cu;
    {
        const bool branch_taken_0x31678c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x31678c) {
            ctx->pc = 0x3168FCu;
            return;
        }
    }
    ctx->pc = 0x316794u;
    // 0x316794: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x316794u;
    {
        const bool branch_taken_0x316794 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x316794) {
            ctx->pc = 0x3167A4u;
            return;
        }
    }
    ctx->pc = 0x31679Cu;
    // 0x31679c: 0x100000dd  b           . + 4 + (0xDD << 2)
    ctx->pc = 0x31679Cu;
    {
        const bool branch_taken_0x31679c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31679c) {
            ctx->pc = 0x316B14u;
            return;
        }
    }
    ctx->pc = 0x3167A4u;
}
