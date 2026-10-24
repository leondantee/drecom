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

// Function: entry_00230540
// Address: 0x230540 - 0x2305d4
void entry_00230540_0x230540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00230540_0x230540");
#endif

    ctx->pc = 0x230540u;

    // 0x230540: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x230540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x230544: 0xc48100d0  lwc1        $f1, 0xD0($a0)
    ctx->pc = 0x230544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x230548: 0x3c033c8e  lui         $v1, 0x3C8E
    ctx->pc = 0x230548u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15502 << 16));
    // 0x23054c: 0x3463fa35  ori         $v1, $v1, 0xFA35
    ctx->pc = 0x23054cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64053);
    // 0x230550: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x230550u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230554: 0x0  nop
    ctx->pc = 0x230554u;
    // NOP
    // 0x230558: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x230558u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23055c: 0xe48000d0  swc1        $f0, 0xD0($a0)
    ctx->pc = 0x23055cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 208), bits); }
    // 0x230560: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x230560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x230564: 0xc48100d4  lwc1        $f1, 0xD4($a0)
    ctx->pc = 0x230564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x230568: 0x3c033c0e  lui         $v1, 0x3C0E
    ctx->pc = 0x230568u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15374 << 16));
    // 0x23056c: 0x3463fa35  ori         $v1, $v1, 0xFA35
    ctx->pc = 0x23056cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64053);
    // 0x230570: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x230570u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230574: 0x0  nop
    ctx->pc = 0x230574u;
    // NOP
    // 0x230578: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x230578u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23057c: 0xe48000d4  swc1        $f0, 0xD4($a0)
    ctx->pc = 0x23057cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 212), bits); }
    // 0x230580: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x230580u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230584: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x230584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x230588: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x230588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23058c: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x23058cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x230590: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x230590u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x230594: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x230594u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230598: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x230598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23059c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23059cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2305a0: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x2305a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x2305a4: 0x3c034020  lui         $v1, 0x4020
    ctx->pc = 0x2305a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16416 << 16));
    // 0x2305a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2305a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2305ac: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2305acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2305b0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2305b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2305b4: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x2305b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x2305b8: 0x3c034020  lui         $v1, 0x4020
    ctx->pc = 0x2305b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16416 << 16));
    // 0x2305bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2305bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2305c0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2305c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2305c4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2305c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2305c8: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x2305c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x2305cc: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x2305CCu;
    {
        const bool branch_taken_0x2305cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2305cc) {
            ctx->pc = 0x2306C0u;
            return;
        }
    }
    ctx->pc = 0x2305D4u;
}
