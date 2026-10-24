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

// Function: entry_00349a0c
// Address: 0x349a0c - 0x349a8c
void entry_00349a0c_0x349a0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00349a0c_0x349a0c");
#endif

    ctx->pc = 0x349a0cu;

    // 0x349a0c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x349a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349a10: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x349a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x349a14: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x349a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x349a18: 0x1060014a  beqz        $v1, . + 4 + (0x14A << 2)
    ctx->pc = 0x349A18u;
    {
        const bool branch_taken_0x349a18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x349a18) {
            ctx->pc = 0x349F44u;
            return;
        }
    }
    ctx->pc = 0x349A20u;
    // 0x349a20: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x349a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349a24: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x349a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x349a28: 0xc4610088  lwc1        $f1, 0x88($v1)
    ctx->pc = 0x349a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x349a2c: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x349a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x349a30: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x349a30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x349a34: 0x0  nop
    ctx->pc = 0x349a34u;
    // NOP
    // 0x349a38: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x349a38u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x349a3c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x349a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349a40: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x349a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x349a44: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x349a44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x349a48: 0x0  nop
    ctx->pc = 0x349a48u;
    // NOP
    // 0x349a4c: 0x4500013d  bc1f        . + 4 + (0x13D << 2)
    ctx->pc = 0x349A4Cu;
    {
        const bool branch_taken_0x349a4c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x349a4c) {
            ctx->pc = 0x349F44u;
            return;
        }
    }
    ctx->pc = 0x349A54u;
    // 0x349a54: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x349a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x349a58: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x349a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349a5c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x349a5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x349a60: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x349a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x349a64: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x349a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349a68: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x349a68u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x349a6c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x349a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349a70: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x349a70u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x349a74: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x349a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349a78: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x349a78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x349a7c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x349a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349a80: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x349a80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x349a84: 0x1000012f  b           . + 4 + (0x12F << 2)
    ctx->pc = 0x349A84u;
    {
        const bool branch_taken_0x349a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x349a84) {
            ctx->pc = 0x349F44u;
            return;
        }
    }
    ctx->pc = 0x349A8Cu;
}
