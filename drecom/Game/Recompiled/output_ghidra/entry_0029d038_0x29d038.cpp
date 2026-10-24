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

// Function: entry_0029d038
// Address: 0x29d038 - 0x29d0c4
void entry_0029d038_0x29d038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029d038_0x29d038");
#endif

    ctx->pc = 0x29d038u;

    // 0x29d038: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x29d038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29d03c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29d03cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29d040: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x29d040u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x29d044: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29d044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29d048: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29d048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29d04c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x29d04cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x29d050: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29d050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29d054: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x29d054u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x29d058: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29d058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29d05c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x29d05cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x29d060: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29d060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29d064: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x29d064u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x29d068: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x29d068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29d06c: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x29d06cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x29d070: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x29d070u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x29d074: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29d074u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29d078: 0x0  nop
    ctx->pc = 0x29d078u;
    // NOP
    // 0x29d07c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x29d07cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29d080: 0x0  nop
    ctx->pc = 0x29d080u;
    // NOP
    // 0x29d084: 0x45010062  bc1t        . + 4 + (0x62 << 2)
    ctx->pc = 0x29D084u;
    {
        const bool branch_taken_0x29d084 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29d084) {
            ctx->pc = 0x29D210u;
            return;
        }
    }
    ctx->pc = 0x29D08Cu;
    // 0x29d08c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x29d08cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29d090: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29d090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29d094: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x29d094u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x29d098: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x29d098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29d09c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29d09cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29d0a0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x29d0a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x29d0a4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29d0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29d0a8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x29d0a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x29d0ac: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29d0acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29d0b0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x29d0b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x29d0b4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29d0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29d0b8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x29d0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x29d0bc: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x29D0BCu;
    {
        const bool branch_taken_0x29d0bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d0bc) {
            ctx->pc = 0x29D210u;
            return;
        }
    }
    ctx->pc = 0x29D0C4u;
}
