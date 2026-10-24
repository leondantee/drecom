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

// Function: entry_002c4084
// Address: 0x2c4084 - 0x2c4110
void entry_002c4084_0x2c4084(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c4084_0x2c4084");
#endif

    ctx->pc = 0x2c4084u;

    // 0x2c4084: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2c4084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c4088: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c4088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c408c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2c408cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c4090: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2c4090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c4094: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c4094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c4098: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2c4098u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c409c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c409cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c40a0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2c40a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c40a4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c40a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c40a8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2c40a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c40ac: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c40acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c40b0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2c40b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2c40b4: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x2c40b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c40b8: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x2c40b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x2c40bc: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x2c40bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x2c40c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c40c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c40c4: 0x0  nop
    ctx->pc = 0x2c40c4u;
    // NOP
    // 0x2c40c8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2c40c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c40cc: 0x0  nop
    ctx->pc = 0x2c40ccu;
    // NOP
    // 0x2c40d0: 0x45010058  bc1t        . + 4 + (0x58 << 2)
    ctx->pc = 0x2C40D0u;
    {
        const bool branch_taken_0x2c40d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c40d0) {
            ctx->pc = 0x2C4234u;
            return;
        }
    }
    ctx->pc = 0x2C40D8u;
    // 0x2c40d8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2c40d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c40dc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c40dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c40e0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2c40e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c40e4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2c40e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c40e8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c40e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c40ec: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2c40ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c40f0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c40f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c40f4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2c40f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c40f8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c40f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c40fc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2c40fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c4100: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c4100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c4104: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2c4104u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2c4108: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x2C4108u;
    {
        const bool branch_taken_0x2c4108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4108) {
            ctx->pc = 0x2C4234u;
            return;
        }
    }
    ctx->pc = 0x2C4110u;
}
