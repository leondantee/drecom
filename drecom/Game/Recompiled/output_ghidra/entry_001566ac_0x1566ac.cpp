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

// Function: entry_001566ac
// Address: 0x1566ac - 0x1568b4
void entry_001566ac_0x1566ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001566ac_0x1566ac");
#endif

    ctx->pc = 0x1566acu;

    // 0x1566ac: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x1566acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x1566b0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1566b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1566b4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1566b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1566b8: 0x3c027400  lui         $v0, 0x7400
    ctx->pc = 0x1566b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29696 << 16));
    // 0x1566bc: 0x34423a14  ori         $v0, $v0, 0x3A14
    ctx->pc = 0x1566bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14868);
    // 0x1566c0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1566c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1566c4: 0x3c038080  lui         $v1, 0x8080
    ctx->pc = 0x1566c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32896 << 16));
    // 0x1566c8: 0x34638080  ori         $v1, $v1, 0x8080
    ctx->pc = 0x1566c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
    // 0x1566cc: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x1566ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1566d0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1566d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1566d4: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1566d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x1566d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1566d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1566dc: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x1566dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1566e0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1566e0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1566e4: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x1566e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x1566e8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1566e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1566ec: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1566ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1566f0: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x1566f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1566f4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1566f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1566f8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1566f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x1566fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1566fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x156700: 0x0  nop
    ctx->pc = 0x156700u;
    // NOP
    // 0x156704: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x156704u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x156708: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x156708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x15670c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x15670cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x156710: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x156710u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x156714: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x156714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156718: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x156718u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x15671c: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x15671cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x156720: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x156720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x156724: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x156724u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x156728: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x156728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15672c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x15672cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x156730: 0x3c144120  lui         $s4, 0x4120
    ctx->pc = 0x156730u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)16672 << 16));
    // 0x156734: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x156734u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x156738: 0x0  nop
    ctx->pc = 0x156738u;
    // NOP
    // 0x15673c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x15673cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x156740: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x156740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x156744: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x156744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x156748: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x156748u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15674c: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x15674cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156750: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x156750u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x156754: 0x3c024360  lui         $v0, 0x4360
    ctx->pc = 0x156754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17248 << 16));
    // 0x156758: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x156758u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15675c: 0x0  nop
    ctx->pc = 0x15675cu;
    // NOP
    // 0x156760: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x156760u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x156764: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x156764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x156768: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x156768u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15676c: 0x0  nop
    ctx->pc = 0x15676cu;
    // NOP
    // 0x156770: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x156770u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x156774: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x156774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x156778: 0x3c144120  lui         $s4, 0x4120
    ctx->pc = 0x156778u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)16672 << 16));
    // 0x15677c: 0x44940800  mtc1        $s4, $f1
    ctx->pc = 0x15677cu;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x156780: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x156780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156784: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x156784u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x156788: 0x3c024360  lui         $v0, 0x4360
    ctx->pc = 0x156788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17248 << 16));
    // 0x15678c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15678cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x156790: 0x0  nop
    ctx->pc = 0x156790u;
    // NOP
    // 0x156794: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x156794u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x156798: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x156798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x15679c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15679cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1567a0: 0x0  nop
    ctx->pc = 0x1567a0u;
    // NOP
    // 0x1567a4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1567a4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1567a8: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x1567a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x1567ac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1567acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1567b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1567b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1567b4: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x1567b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1567b8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1567b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1567bc: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1567bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x1567c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1567c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1567c4: 0x0  nop
    ctx->pc = 0x1567c4u;
    // NOP
    // 0x1567c8: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1567c8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1567cc: 0x3c034360  lui         $v1, 0x4360
    ctx->pc = 0x1567ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17248 << 16));
    // 0x1567d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1567d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1567d4: 0x0  nop
    ctx->pc = 0x1567d4u;
    // NOP
    // 0x1567d8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1567d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1567dc: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x1567dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x1567e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1567e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1567e4: 0x0  nop
    ctx->pc = 0x1567e4u;
    // NOP
    // 0x1567e8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1567e8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1567ec: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x1567ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x1567f0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1567f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1567f4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1567f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1567f8: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x1567f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1567fc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1567fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x156800: 0x3c144120  lui         $s4, 0x4120
    ctx->pc = 0x156800u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)16672 << 16));
    // 0x156804: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x156804u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x156808: 0x0  nop
    ctx->pc = 0x156808u;
    // NOP
    // 0x15680c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x15680cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x156810: 0x3c024360  lui         $v0, 0x4360
    ctx->pc = 0x156810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17248 << 16));
    // 0x156814: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x156814u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x156818: 0x0  nop
    ctx->pc = 0x156818u;
    // NOP
    // 0x15681c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x15681cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x156820: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x156820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x156824: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x156824u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x156828: 0x0  nop
    ctx->pc = 0x156828u;
    // NOP
    // 0x15682c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x15682cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x156830: 0x0  nop
    ctx->pc = 0x156830u;
    // NOP
    // 0x156834: 0x0  nop
    ctx->pc = 0x156834u;
    // NOP
    // 0x156838: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x156838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x15683c: 0x1640001d  bnez        $s2, . + 4 + (0x1D << 2)
    ctx->pc = 0x15683Cu;
    {
        const bool branch_taken_0x15683c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x15683c) {
            ctx->pc = 0x1568B4u;
            return;
        }
    }
    ctx->pc = 0x156844u;
    // 0x156844: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x156844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x156848: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x156848u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15684c: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x15684cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156850: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x156850u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x156854: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x156854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x156858: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x156858u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15685c: 0x0  nop
    ctx->pc = 0x15685cu;
    // NOP
    // 0x156860: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x156860u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x156864: 0x3c0244e0  lui         $v0, 0x44E0
    ctx->pc = 0x156864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17632 << 16));
    // 0x156868: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x156868u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15686c: 0x0  nop
    ctx->pc = 0x15686cu;
    // NOP
    // 0x156870: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x156870u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x156874: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x156874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x156878: 0x3c034400  lui         $v1, 0x4400
    ctx->pc = 0x156878u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17408 << 16));
    // 0x15687c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x15687cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x156880: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x156880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156884: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x156884u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x156888: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x156888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x15688c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15688cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x156890: 0x0  nop
    ctx->pc = 0x156890u;
    // NOP
    // 0x156894: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x156894u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x156898: 0x3c0444e0  lui         $a0, 0x44E0
    ctx->pc = 0x156898u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17632 << 16));
    // 0x15689c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x15689cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1568a0: 0x0  nop
    ctx->pc = 0x1568a0u;
    // NOP
    // 0x1568a4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1568a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1568a8: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x1568a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x1568ac: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x1568ACu;
    {
        const bool branch_taken_0x1568ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1568ac) {
            ctx->pc = 0x1569A0u;
            return;
        }
    }
    ctx->pc = 0x1568B4u;
}
