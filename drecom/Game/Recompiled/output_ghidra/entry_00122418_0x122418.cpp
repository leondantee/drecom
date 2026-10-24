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

// Function: entry_00122418
// Address: 0x122418 - 0x12247c
void entry_00122418_0x122418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00122418_0x122418");
#endif

    switch (ctx->pc) {
        case 0x12243cu: goto label_12243c;
        default: break;
    }

    ctx->pc = 0x122418u;

    // 0x122418: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x122418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12241c: 0xc48111f8  lwc1        $f1, 0x11F8($a0)
    ctx->pc = 0x12241cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x122420: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x122420u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x122424: 0x34650fdb  ori         $a1, $v1, 0xFDB
    ctx->pc = 0x122424u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x122428: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x122428u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12242c: 0x0  nop
    ctx->pc = 0x12242cu;
    // NOP
    // 0x122430: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x122430u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x122434: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x122434u;
    SET_GPR_U32(ctx, 31, 0x12243Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x122434u, 0x12243Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12243Cu;
label_12243c:
    // 0x12243c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x12243cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122440: 0xe46011f8  swc1        $f0, 0x11F8($v1)
    ctx->pc = 0x122440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4600), bits); }
    // 0x122444: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x122444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x122448: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12244c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12244cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x122450: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x122450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x122454: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x122454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122458: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x122458u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x12245c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x12245cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122460: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x122460u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x122464: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122468: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x122468u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x12246c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x12246cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122470: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x122470u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x122474: 0x1000022e  b           . + 4 + (0x22E << 2)
    ctx->pc = 0x122474u;
    {
        const bool branch_taken_0x122474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x122474) {
            ctx->pc = 0x122D30u;
            return;
        }
    }
    ctx->pc = 0x12247Cu;
}
