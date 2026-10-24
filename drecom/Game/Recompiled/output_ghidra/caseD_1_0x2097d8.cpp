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

// Function: caseD_1
// Address: 0x2097d8 - 0x20984c
void caseD_1_0x2097d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x2097d8");
#endif

    ctx->pc = 0x2097d8u;

    // 0x2097d8: 0xc60101a0  lwc1        $f1, 0x1A0($s0)
    ctx->pc = 0x2097d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2097dc: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2097dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2097e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2097e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2097e4: 0x0  nop
    ctx->pc = 0x2097e4u;
    // NOP
    // 0x2097e8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2097e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2097ec: 0x0  nop
    ctx->pc = 0x2097ecu;
    // NOP
    // 0x2097f0: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x2097F0u;
    {
        const bool branch_taken_0x2097f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2097f0) {
            ctx->pc = 0x20984Cu;
            return;
        }
    }
    ctx->pc = 0x2097F8u;
    // 0x2097f8: 0xc60101a0  lwc1        $f1, 0x1A0($s0)
    ctx->pc = 0x2097f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2097fc: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x2097fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x209800: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x209800u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x209804: 0x0  nop
    ctx->pc = 0x209804u;
    // NOP
    // 0x209808: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x209808u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x20980c: 0xe60001a0  swc1        $f0, 0x1A0($s0)
    ctx->pc = 0x20980cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 416), bits); }
    // 0x209810: 0xc60101a4  lwc1        $f1, 0x1A4($s0)
    ctx->pc = 0x209810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x209814: 0x3c023c4c  lui         $v0, 0x3C4C
    ctx->pc = 0x209814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15436 << 16));
    // 0x209818: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x209818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x20981c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20981cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x209820: 0x0  nop
    ctx->pc = 0x209820u;
    // NOP
    // 0x209824: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x209824u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x209828: 0xe60001a4  swc1        $f0, 0x1A4($s0)
    ctx->pc = 0x209828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 420), bits); }
    // 0x20982c: 0xc60101a8  lwc1        $f1, 0x1A8($s0)
    ctx->pc = 0x20982cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x209830: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x209830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x209834: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x209834u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x209838: 0x0  nop
    ctx->pc = 0x209838u;
    // NOP
    // 0x20983c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x20983cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x209840: 0xe60001a8  swc1        $f0, 0x1A8($s0)
    ctx->pc = 0x209840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 424), bits); }
    // 0x209844: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x209844u;
    {
        const bool branch_taken_0x209844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x209844) {
            ctx->pc = 0x209880u;
            return;
        }
    }
    ctx->pc = 0x20984Cu;
}
