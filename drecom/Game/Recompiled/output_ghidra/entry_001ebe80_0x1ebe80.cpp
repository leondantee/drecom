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

// Function: entry_001ebe80
// Address: 0x1ebe80 - 0x1ebefc
void entry_001ebe80_0x1ebe80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ebe80_0x1ebe80");
#endif

    ctx->pc = 0x1ebe80u;

    // 0x1ebe80: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1ebe80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ebe84: 0x24a21330  addiu       $v0, $a1, 0x1330
    ctx->pc = 0x1ebe84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x1ebe88: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1ebe88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1ebe8c: 0x30820010  andi        $v0, $a0, 0x10
    ctx->pc = 0x1ebe8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
    // 0x1ebe90: 0x1440005e  bnez        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x1EBE90u;
    {
        const bool branch_taken_0x1ebe90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ebe90) {
            ctx->pc = 0x1EC00Cu;
            return;
        }
    }
    ctx->pc = 0x1EBE98u;
    // 0x1ebe98: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ebe98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ebe9c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1ebe9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ebea0: 0xe4a00184  swc1        $f0, 0x184($a1)
    ctx->pc = 0x1ebea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 388), bits); }
    // 0x1ebea4: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x1ebea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x1ebea8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ebea8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ebeac: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1ebeacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1ebeb0: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x1ebeb0u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ebeb4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1ebeb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ebeb8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ebeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ebebc: 0x24531330  addiu       $s3, $v0, 0x1330
    ctx->pc = 0x1ebebcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ebec0: 0xe6600010  swc1        $f0, 0x10($s3)
    ctx->pc = 0x1ebec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 16), bits); }
    // 0x1ebec4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ebec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ebec8: 0x24521330  addiu       $s2, $v0, 0x1330
    ctx->pc = 0x1ebec8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ebecc: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x1ebeccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x1ebed0: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x1ebed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x1ebed4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1EBED4u;
    {
        const bool branch_taken_0x1ebed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ebed4) {
            ctx->pc = 0x1EBEFCu;
            return;
        }
    }
    ctx->pc = 0x1EBEDCu;
    // 0x1ebedc: 0x3c0344af  lui         $v1, 0x44AF
    ctx->pc = 0x1ebedcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17583 << 16));
    // 0x1ebee0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1ebee0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ebee4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1ebee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1ebee8: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x1ebee8u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ebeec: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1ebeecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ebef0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1ebef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ebef4: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x1ebef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x1ebef8: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x1ebef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    ctx->pc = 0x1ebefcu;
}
