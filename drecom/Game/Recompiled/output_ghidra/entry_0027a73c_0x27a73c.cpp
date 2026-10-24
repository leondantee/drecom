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

// Function: entry_0027a73c
// Address: 0x27a73c - 0x27a850
void entry_0027a73c_0x27a73c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027a73c_0x27a73c");
#endif

    ctx->pc = 0x27a73cu;

    // 0x27a73c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27a73cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27a740: 0x8c231ae4  lw          $v1, 0x1AE4($at)
    ctx->pc = 0x27a740u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1AE4u));
    // 0x27a744: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x27a744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x27a748: 0x146000e5  bnez        $v1, . + 4 + (0xE5 << 2)
    ctx->pc = 0x27A748u;
    {
        const bool branch_taken_0x27a748 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27a748) {
            ctx->pc = 0x27AAE0u;
            return;
        }
    }
    ctx->pc = 0x27A750u;
    // 0x27a750: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27a750u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27a754: 0x8c241b04  lw          $a0, 0x1B04($at)
    ctx->pc = 0x27a754u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1B04u));
    // 0x27a758: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x27a758u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x27a75c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x27a75cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x27a760: 0x106000df  beqz        $v1, . + 4 + (0xDF << 2)
    ctx->pc = 0x27A760u;
    {
        const bool branch_taken_0x27a760 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a760) {
            ctx->pc = 0x27AAE0u;
            return;
        }
    }
    ctx->pc = 0x27A768u;
    // 0x27a768: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27a768u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27a76c: 0x8c31f9f8  lw          $s1, -0x608($at)
    ctx->pc = 0x27a76cu;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x61F9F8u));
    // 0x27a770: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x27a770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x27a774: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x27a774u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x27a778: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x27a778u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x27a77c: 0x3c033fb4  lui         $v1, 0x3FB4
    ctx->pc = 0x27a77cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16308 << 16));
    // 0x27a780: 0x3463fdf4  ori         $v1, $v1, 0xFDF4
    ctx->pc = 0x27a780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65012);
    // 0x27a784: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27a784u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27a788: 0x0  nop
    ctx->pc = 0x27a788u;
    // NOP
    // 0x27a78c: 0xe62001a0  swc1        $f0, 0x1A0($s1)
    ctx->pc = 0x27a78cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 416), bits); }
    // 0x27a790: 0x3c033fb4  lui         $v1, 0x3FB4
    ctx->pc = 0x27a790u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16308 << 16));
    // 0x27a794: 0x3463fdf4  ori         $v1, $v1, 0xFDF4
    ctx->pc = 0x27a794u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65012);
    // 0x27a798: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27a798u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27a79c: 0x0  nop
    ctx->pc = 0x27a79cu;
    // NOP
    // 0x27a7a0: 0xe62001a4  swc1        $f0, 0x1A4($s1)
    ctx->pc = 0x27a7a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 420), bits); }
    // 0x27a7a4: 0x3c033fb4  lui         $v1, 0x3FB4
    ctx->pc = 0x27a7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16308 << 16));
    // 0x27a7a8: 0x3463fdf4  ori         $v1, $v1, 0xFDF4
    ctx->pc = 0x27a7a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65012);
    // 0x27a7ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27a7acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27a7b0: 0x0  nop
    ctx->pc = 0x27a7b0u;
    // NOP
    // 0x27a7b4: 0xe62001a8  swc1        $f0, 0x1A8($s1)
    ctx->pc = 0x27a7b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 424), bits); }
    // 0x27a7b8: 0xc6210124  lwc1        $f1, 0x124($s1)
    ctx->pc = 0x27a7b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27a7bc: 0x3c0344fc  lui         $v1, 0x44FC
    ctx->pc = 0x27a7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17660 << 16));
    // 0x27a7c0: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x27a7c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x27a7c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27a7c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27a7c8: 0x0  nop
    ctx->pc = 0x27a7c8u;
    // NOP
    // 0x27a7cc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x27a7ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27a7d0: 0x0  nop
    ctx->pc = 0x27a7d0u;
    // NOP
    // 0x27a7d4: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
    ctx->pc = 0x27A7D4u;
    {
        const bool branch_taken_0x27a7d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27a7d4) {
            ctx->pc = 0x27A850u;
            return;
        }
    }
    ctx->pc = 0x27A7DCu;
    // 0x27a7dc: 0xc6010058  lwc1        $f1, 0x58($s0)
    ctx->pc = 0x27a7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27a7e0: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x27a7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x27a7e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27a7e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27a7e8: 0x0  nop
    ctx->pc = 0x27a7e8u;
    // NOP
    // 0x27a7ec: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x27a7ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x27a7f0: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x27a7f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x27a7f4: 0xc6010058  lwc1        $f1, 0x58($s0)
    ctx->pc = 0x27a7f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27a7f8: 0xc6200124  lwc1        $f0, 0x124($s1)
    ctx->pc = 0x27a7f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27a7fc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x27a7fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27a800: 0xe6200124  swc1        $f0, 0x124($s1)
    ctx->pc = 0x27a800u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 292), bits); }
    // 0x27a804: 0xc6210124  lwc1        $f1, 0x124($s1)
    ctx->pc = 0x27a804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27a808: 0x3c0344fc  lui         $v1, 0x44FC
    ctx->pc = 0x27a808u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17660 << 16));
    // 0x27a80c: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x27a80cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x27a810: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27a810u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27a814: 0x0  nop
    ctx->pc = 0x27a814u;
    // NOP
    // 0x27a818: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x27a818u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27a81c: 0x0  nop
    ctx->pc = 0x27a81cu;
    // NOP
    // 0x27a820: 0x450000af  bc1f        . + 4 + (0xAF << 2)
    ctx->pc = 0x27A820u;
    {
        const bool branch_taken_0x27a820 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27a820) {
            ctx->pc = 0x27AAE0u;
            return;
        }
    }
    ctx->pc = 0x27A828u;
    // 0x27a828: 0x3c0344fc  lui         $v1, 0x44FC
    ctx->pc = 0x27a828u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17660 << 16));
    // 0x27a82c: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x27a82cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x27a830: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27a830u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27a834: 0x0  nop
    ctx->pc = 0x27a834u;
    // NOP
    // 0x27a838: 0xe6200124  swc1        $f0, 0x124($s1)
    ctx->pc = 0x27a838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 292), bits); }
    // 0x27a83c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x27a83cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x27a840: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27a840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27a844: 0xa023d731  sb          $v1, -0x28CF($at)
    ctx->pc = 0x27a844u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CD731u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD731u, _value); } while (0);
    // 0x27a848: 0x100000a5  b           . + 4 + (0xA5 << 2)
    ctx->pc = 0x27A848u;
    {
        const bool branch_taken_0x27a848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a848) {
            ctx->pc = 0x27AAE0u;
            return;
        }
    }
    ctx->pc = 0x27A850u;
}
