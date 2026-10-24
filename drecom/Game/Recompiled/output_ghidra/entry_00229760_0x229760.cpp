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

// Function: entry_00229760
// Address: 0x229760 - 0x2297c8
void entry_00229760_0x229760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00229760_0x229760");
#endif

    ctx->pc = 0x229760u;

    // 0x229760: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x229760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229764: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x229764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229768: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x229768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
    // 0x22976c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22976cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229770: 0x0  nop
    ctx->pc = 0x229770u;
    // NOP
    // 0x229774: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x229774u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x229778: 0x0  nop
    ctx->pc = 0x229778u;
    // NOP
    // 0x22977c: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x22977Cu;
    {
        const bool branch_taken_0x22977c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22977c) {
            ctx->pc = 0x2297C8u;
            return;
        }
    }
    ctx->pc = 0x229784u;
    // 0x229784: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x229784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x229788: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x229788u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22978c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x22978cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229790: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x229790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x229794: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x229794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x229798: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x229798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x22979c: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x22979cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x2297a0: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x2297a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2297a4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2297a4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2297a8: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2297a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2297ac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2297ACu;
    {
        const bool branch_taken_0x2297ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2297ac) {
            ctx->pc = 0x2297C8u;
            return;
        }
    }
    ctx->pc = 0x2297B4u;
    // 0x2297b4: 0x3c03c248  lui         $v1, 0xC248
    ctx->pc = 0x2297b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49736 << 16));
    // 0x2297b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2297b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2297bc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2297bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2297c0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2297c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2297c4: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x2297c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    ctx->pc = 0x2297c8u;
}
