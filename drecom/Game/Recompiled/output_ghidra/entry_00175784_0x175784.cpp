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

// Function: entry_00175784
// Address: 0x175784 - 0x1757fc
void entry_00175784_0x175784(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175784_0x175784");
#endif

    switch (ctx->pc) {
        case 0x1757ecu: goto label_1757ec;
        default: break;
    }

    ctx->pc = 0x175784u;

    // 0x175784: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x175784u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x175788: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x175788u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x17578c: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x17578cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x175790: 0x7a230000  lq          $v1, 0x0($s1)
    ctx->pc = 0x175790u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x175794: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x175794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x175798: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x175798u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x17579c: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x17579cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1757a0: 0xc7a1005c  lwc1        $f1, 0x5C($sp)
    ctx->pc = 0x1757a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1757a4: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1757a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1757a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1757a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1757ac: 0x0  nop
    ctx->pc = 0x1757acu;
    // NOP
    // 0x1757b0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1757b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1757b4: 0x0  nop
    ctx->pc = 0x1757b4u;
    // NOP
    // 0x1757b8: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x1757B8u;
    {
        const bool branch_taken_0x1757b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1757b8) {
            ctx->pc = 0x1757FCu;
            return;
        }
    }
    ctx->pc = 0x1757C0u;
    // 0x1757c0: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x1757c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1757c4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1757c4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1757c8: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x1757c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1757cc: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1757ccu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1757d0: 0x3c023b80  lui         $v0, 0x3B80
    ctx->pc = 0x1757d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15232 << 16));
    // 0x1757d4: 0x34428081  ori         $v0, $v0, 0x8081
    ctx->pc = 0x1757d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32897);
    // 0x1757d8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1757d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1757dc: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x1757dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1757e0: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x1757e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1757e4: 0xc040c8c  jal         func_103230
    ctx->pc = 0x1757E4u;
    SET_GPR_U32(ctx, 31, 0x1757ECu);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x1757ECu;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1757ECu) { return; }
    ctx->pc = 0x1757ECu;
label_1757ec:
    // 0x1757ec: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x1757ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1757f0: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x1757f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x1757f4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1757F4u;
    {
        const bool branch_taken_0x1757f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1757f4) {
            ctx->pc = 0x175810u;
            return;
        }
    }
    ctx->pc = 0x1757FCu;
}
