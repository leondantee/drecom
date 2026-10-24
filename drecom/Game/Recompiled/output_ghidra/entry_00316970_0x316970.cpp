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

// Function: entry_00316970
// Address: 0x316970 - 0x316a10
void entry_00316970_0x316970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00316970_0x316970");
#endif

    ctx->pc = 0x316970u;

    // 0x316970: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x316970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x316974: 0xc48101a0  lwc1        $f1, 0x1A0($a0)
    ctx->pc = 0x316974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x316978: 0x3c033ba3  lui         $v1, 0x3BA3
    ctx->pc = 0x316978u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15267 << 16));
    // 0x31697c: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x31697cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x316980: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x316980u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x316984: 0x0  nop
    ctx->pc = 0x316984u;
    // NOP
    // 0x316988: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x316988u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x31698c: 0xe48001a0  swc1        $f0, 0x1A0($a0)
    ctx->pc = 0x31698cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 416), bits); }
    // 0x316990: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x316990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x316994: 0xc48101a4  lwc1        $f1, 0x1A4($a0)
    ctx->pc = 0x316994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x316998: 0x3c033ba3  lui         $v1, 0x3BA3
    ctx->pc = 0x316998u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15267 << 16));
    // 0x31699c: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x31699cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x3169a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3169a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3169a4: 0x0  nop
    ctx->pc = 0x3169a4u;
    // NOP
    // 0x3169a8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3169a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3169ac: 0xe48001a4  swc1        $f0, 0x1A4($a0)
    ctx->pc = 0x3169acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 420), bits); }
    // 0x3169b0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x3169b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3169b4: 0xc48101a8  lwc1        $f1, 0x1A8($a0)
    ctx->pc = 0x3169b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3169b8: 0x3c033ba3  lui         $v1, 0x3BA3
    ctx->pc = 0x3169b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15267 << 16));
    // 0x3169bc: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x3169bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x3169c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3169c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3169c4: 0x0  nop
    ctx->pc = 0x3169c4u;
    // NOP
    // 0x3169c8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3169c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3169cc: 0xe48001a8  swc1        $f0, 0x1A8($a0)
    ctx->pc = 0x3169ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 424), bits); }
    // 0x3169d0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3169d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3169d4: 0xc46101a0  lwc1        $f1, 0x1A0($v1)
    ctx->pc = 0x3169d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3169d8: 0x3c033ecc  lui         $v1, 0x3ECC
    ctx->pc = 0x3169d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16076 << 16));
    // 0x3169dc: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x3169dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x3169e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3169e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3169e4: 0x0  nop
    ctx->pc = 0x3169e4u;
    // NOP
    // 0x3169e8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3169e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3169ec: 0x0  nop
    ctx->pc = 0x3169ecu;
    // NOP
    // 0x3169f0: 0x45010048  bc1t        . + 4 + (0x48 << 2)
    ctx->pc = 0x3169F0u;
    {
        const bool branch_taken_0x3169f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3169f0) {
            ctx->pc = 0x316B14u;
            return;
        }
    }
    ctx->pc = 0x3169F8u;
    // 0x3169f8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x3169f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3169fc: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x3169fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x316a00: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x316a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x316a04: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x316a04u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x316a08: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x316A08u;
    {
        const bool branch_taken_0x316a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x316a08) {
            ctx->pc = 0x316B14u;
            return;
        }
    }
    ctx->pc = 0x316A10u;
}
