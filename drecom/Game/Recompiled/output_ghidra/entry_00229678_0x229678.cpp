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

// Function: entry_00229678
// Address: 0x229678 - 0x2296ec
void entry_00229678_0x229678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00229678_0x229678");
#endif

    ctx->pc = 0x229678u;

    // 0x229678: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x229678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x22967c: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x22967cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229680: 0x3c05453b  lui         $a1, 0x453B
    ctx->pc = 0x229680u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17723 << 16));
    // 0x229684: 0x34a48000  ori         $a0, $a1, 0x8000
    ctx->pc = 0x229684u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    // 0x229688: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x229688u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22968c: 0x0  nop
    ctx->pc = 0x22968cu;
    // NOP
    // 0x229690: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x229690u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x229694: 0x0  nop
    ctx->pc = 0x229694u;
    // NOP
    // 0x229698: 0x4501004b  bc1t        . + 4 + (0x4B << 2)
    ctx->pc = 0x229698u;
    {
        const bool branch_taken_0x229698 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x229698) {
            ctx->pc = 0x2297C8u;
            return;
        }
    }
    ctx->pc = 0x2296A0u;
    // 0x2296a0: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2296a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2296a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2296a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2296a8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2296a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2296ac: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2296acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2296b0: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x2296b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x2296b4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2296b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2296b8: 0x8444127a  lh          $a0, 0x127A($v0)
    ctx->pc = 0x2296b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x2296bc: 0x42c3c  dsll32      $a1, $a0, 16
    ctx->pc = 0x2296bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
    // 0x2296c0: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x2296c0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x2296c4: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x2296c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x2296c8: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x2296C8u;
    {
        const bool branch_taken_0x2296c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2296c8) {
            ctx->pc = 0x2297C8u;
            return;
        }
    }
    ctx->pc = 0x2296D0u;
    // 0x2296d0: 0x3c04c2c8  lui         $a0, 0xC2C8
    ctx->pc = 0x2296d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49864 << 16));
    // 0x2296d4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2296d4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2296d8: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x2296d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2296dc: 0x24a21330  addiu       $v0, $a1, 0x1330
    ctx->pc = 0x2296dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x2296e0: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x2296e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x2296e4: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x2296E4u;
    {
        const bool branch_taken_0x2296e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2296e4) {
            ctx->pc = 0x2297C8u;
            return;
        }
    }
    ctx->pc = 0x2296ECu;
}
