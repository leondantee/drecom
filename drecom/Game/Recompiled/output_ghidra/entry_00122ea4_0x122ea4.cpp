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

// Function: entry_00122ea4
// Address: 0x122ea4 - 0x122f40
void entry_00122ea4_0x122ea4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00122ea4_0x122ea4");
#endif

    switch (ctx->pc) {
        case 0x122efcu: goto label_122efc;
        case 0x122f08u: goto label_122f08;
        default: break;
    }

    ctx->pc = 0x122ea4u;

    // 0x122ea4: 0x3c024422  lui         $v0, 0x4422
    ctx->pc = 0x122ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17442 << 16));
    // 0x122ea8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x122ea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x122eac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x122eacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x122eb0: 0x0  nop
    ctx->pc = 0x122eb0u;
    // NOP
    // 0x122eb4: 0xe64000d8  swc1        $f0, 0xD8($s2)
    ctx->pc = 0x122eb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 216), bits); }
    // 0x122eb8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x122eb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x122ebc: 0x0  nop
    ctx->pc = 0x122ebcu;
    // NOP
    // 0x122ec0: 0xe6400030  swc1        $f0, 0x30($s2)
    ctx->pc = 0x122ec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
    // 0x122ec4: 0x3c02c3c8  lui         $v0, 0xC3C8
    ctx->pc = 0x122ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50120 << 16));
    // 0x122ec8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x122ec8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x122ecc: 0x0  nop
    ctx->pc = 0x122eccu;
    // NOP
    // 0x122ed0: 0xe6400034  swc1        $f0, 0x34($s2)
    ctx->pc = 0x122ed0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
    // 0x122ed4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x122ed4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x122ed8: 0x0  nop
    ctx->pc = 0x122ed8u;
    // NOP
    // 0x122edc: 0xe6400038  swc1        $f0, 0x38($s2)
    ctx->pc = 0x122edcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
    // 0x122ee0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x122ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x122ee4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x122ee4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x122ee8: 0x0  nop
    ctx->pc = 0x122ee8u;
    // NOP
    // 0x122eec: 0xe640003c  swc1        $f0, 0x3C($s2)
    ctx->pc = 0x122eecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 60), bits); }
    // 0x122ef0: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x122ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x122ef4: 0xc04d3c0  jal         func_134F00
    ctx->pc = 0x122EF4u;
    SET_GPR_U32(ctx, 31, 0x122EFCu);
    ctx->pc = 0x134F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134F00u, 0x122EF4u, 0x122EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122EFCu;
label_122efc:
    // 0x122efc: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x122efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x122f00: 0xc04d098  jal         func_134260
    ctx->pc = 0x122F00u;
    SET_GPR_U32(ctx, 31, 0x122F08u);
    ctx->pc = 0x134260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134260u, 0x122F00u, 0x122F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122F08u;
label_122f08:
    // 0x122f08: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x122f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x122f0c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x122f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x122f10: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x122f10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x122f14: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x122f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x122f18: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x122F18u;
    {
        const bool branch_taken_0x122f18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x122f18) {
            ctx->pc = 0x122F40u;
            return;
        }
    }
    ctx->pc = 0x122F20u;
    // 0x122f20: 0x24030300  addiu       $v1, $zero, 0x300
    ctx->pc = 0x122f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x122f24: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x122f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x122f28: 0xa443122c  sh          $v1, 0x122C($v0)
    ctx->pc = 0x122f28u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4652), (uint16_t)GPR_U32(ctx, 3));
    // 0x122f2c: 0x24030033  addiu       $v1, $zero, 0x33
    ctx->pc = 0x122f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x122f30: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x122f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x122f34: 0xa443122e  sh          $v1, 0x122E($v0)
    ctx->pc = 0x122f34u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4654), (uint16_t)GPR_U32(ctx, 3));
    // 0x122f38: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x122F38u;
    {
        const bool branch_taken_0x122f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x122f38) {
            ctx->pc = 0x122F58u;
            return;
        }
    }
    ctx->pc = 0x122F40u;
}
