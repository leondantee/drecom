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

// Function: entry_0030c73c
// Address: 0x30c73c - 0x30c7c8
void entry_0030c73c_0x30c73c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030c73c_0x30c73c");
#endif

    switch (ctx->pc) {
        case 0x30c790u: goto label_30c790;
        default: break;
    }

    ctx->pc = 0x30c73cu;

    // 0x30c73c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30c73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c740: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x30c740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30c744: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x30c744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
    // 0x30c748: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30c748u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30c74c: 0x0  nop
    ctx->pc = 0x30c74cu;
    // NOP
    // 0x30c750: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x30c750u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30c754: 0x0  nop
    ctx->pc = 0x30c754u;
    // NOP
    // 0x30c758: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x30C758u;
    {
        const bool branch_taken_0x30c758 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30c758) {
            ctx->pc = 0x30C7C8u;
            return;
        }
    }
    ctx->pc = 0x30C760u;
    // 0x30c760: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x30c760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x30c764: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x30c764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x30c768: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x30c768u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x30c76c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30c76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c770: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x30c770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x30c774: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30c774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c778: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x30c778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x30c77c: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x30c77cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30c780: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x30c780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x30c784: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x30c784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x30c788: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x30C788u;
    SET_GPR_U32(ctx, 31, 0x30C790u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x30C788u, 0x30C790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C790u;
label_30c790:
    // 0x30c790: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x30C790u;
    {
        const bool branch_taken_0x30c790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c790) {
            ctx->pc = 0x30C7C8u;
            return;
        }
    }
    ctx->pc = 0x30C798u;
    // 0x30c798: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30c798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30c79c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30c79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c7a0: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x30c7a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x30c7a4: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x30c7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x30c7a8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30c7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c7ac: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x30c7acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x30c7b0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30c7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c7b4: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x30c7b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x30c7b8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30c7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c7bc: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x30c7bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x30c7c0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30c7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c7c4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x30c7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x30c7c8u;
}
