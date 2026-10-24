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

// Function: entry_0032a404
// Address: 0x32a404 - 0x32a4e8
void entry_0032a404_0x32a404(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032a404_0x32a404");
#endif

    ctx->pc = 0x32a404u;

    // 0x32a404: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x32a404u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x32a408: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x32a408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x32a40c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x32a40cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32a410: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x32a410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x32a414: 0x24420016  addiu       $v0, $v0, 0x16
    ctx->pc = 0x32a414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22));
    // 0x32a418: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32a418u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32a41c: 0x0  nop
    ctx->pc = 0x32a41cu;
    // NOP
    // 0x32a420: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x32a420u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x32a424: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x32a424u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x32a428: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x32a428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x32a42c: 0xe4400420  swc1        $f0, 0x420($v0)
    ctx->pc = 0x32a42cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 1056), bits); }
    // 0x32a430: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x32a430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x32a434: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32a434u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32a438: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x32a438u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x32a43c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x32a43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x32a440: 0xe4400424  swc1        $f0, 0x424($v0)
    ctx->pc = 0x32a440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 1060), bits); }
    // 0x32a444: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x32a444u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x32a448: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x32a448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x32a44c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x32a44cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32a450: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x32a450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x32a454: 0x24420039  addiu       $v0, $v0, 0x39
    ctx->pc = 0x32a454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 57));
    // 0x32a458: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32a458u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32a45c: 0x0  nop
    ctx->pc = 0x32a45cu;
    // NOP
    // 0x32a460: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x32a460u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x32a464: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x32a464u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x32a468: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x32a468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x32a46c: 0xe4400428  swc1        $f0, 0x428($v0)
    ctx->pc = 0x32a46cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 1064), bits); }
    // 0x32a470: 0x3c024286  lui         $v0, 0x4286
    ctx->pc = 0x32a470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17030 << 16));
    // 0x32a474: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32a474u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32a478: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x32a478u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x32a47c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x32a47cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x32a480: 0xe440042c  swc1        $f0, 0x42C($v0)
    ctx->pc = 0x32a480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 1068), bits); }
    // 0x32a484: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x32a484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x32a488: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x32a488u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32a48c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32a48cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32a490: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x32a490u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x32a494: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x32a494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x32a498: 0x2442a310  addiu       $v0, $v0, -0x5CF0
    ctx->pc = 0x32a498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943504));
    // 0x32a49c: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x32a49cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32a4a0: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x32a4a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32a4a4: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x32a4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x32a4a8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x32a4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x32a4ac: 0xe4400c20  swc1        $f0, 0xC20($v0)
    ctx->pc = 0x32a4acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 3104), bits); }
    // 0x32a4b0: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x32a4b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32a4b4: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x32a4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x32a4b8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x32a4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x32a4bc: 0xe4400c24  swc1        $f0, 0xC24($v0)
    ctx->pc = 0x32a4bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 3108), bits); }
    // 0x32a4c0: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x32a4c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32a4c4: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x32a4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x32a4c8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x32a4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x32a4cc: 0xe4400c28  swc1        $f0, 0xC28($v0)
    ctx->pc = 0x32a4ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 3112), bits); }
    // 0x32a4d0: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x32a4d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32a4d4: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x32a4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x32a4d8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x32a4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x32a4dc: 0xe4400c2c  swc1        $f0, 0xC2C($v0)
    ctx->pc = 0x32a4dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 3116), bits); }
    // 0x32a4e0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x32a4e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x32a4e4: 0x0  nop
    ctx->pc = 0x32a4e4u;
    // NOP
    ctx->pc = 0x32a4e8u;
}
