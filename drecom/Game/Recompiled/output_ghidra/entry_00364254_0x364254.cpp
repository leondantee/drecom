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

// Function: entry_00364254
// Address: 0x364254 - 0x3642c8
void entry_00364254_0x364254(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00364254_0x364254");
#endif

    ctx->pc = 0x364254u;

    // 0x364254: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x364254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x364258: 0x3c033f49  lui         $v1, 0x3F49
    ctx->pc = 0x364258u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16201 << 16));
    // 0x36425c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x36425cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x364260: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x364260u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x364264: 0x0  nop
    ctx->pc = 0x364264u;
    // NOP
    // 0x364268: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x364268u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x36426c: 0x0  nop
    ctx->pc = 0x36426cu;
    // NOP
    // 0x364270: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x364270u;
    {
        const bool branch_taken_0x364270 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x364270) {
            ctx->pc = 0x364300u;
            return;
        }
    }
    ctx->pc = 0x364278u;
    // 0x364278: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36427c: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x36427cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x364280: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x364280u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x364284: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x364284u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x364288: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x364288u;
    {
        const bool branch_taken_0x364288 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x364288) {
            ctx->pc = 0x3642C8u;
            return;
        }
    }
    ctx->pc = 0x364290u;
    // 0x364290: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x364290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x364294: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364298: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x364298u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x36429c: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x36429cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3642a0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3642a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3642a4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x3642a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x3642a8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3642a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3642ac: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x3642acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3642b0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3642b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3642b4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x3642b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3642b8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3642b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3642bc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3642bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x3642c0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3642C0u;
    {
        const bool branch_taken_0x3642c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3642c0) {
            ctx->pc = 0x3642F8u;
            return;
        }
    }
    ctx->pc = 0x3642C8u;
}
