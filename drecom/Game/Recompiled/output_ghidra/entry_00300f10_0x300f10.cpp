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

// Function: entry_00300f10
// Address: 0x300f10 - 0x300fa4
void entry_00300f10_0x300f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00300f10_0x300f10");
#endif

    ctx->pc = 0x300f10u;

    // 0x300f10: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x300f10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x300f14: 0x24439290  addiu       $v1, $v0, -0x6D70
    ctx->pc = 0x300f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939280));
    // 0x300f18: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x300f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x300f1c: 0xac430354  sw          $v1, 0x354($v0)
    ctx->pc = 0x300f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 852), GPR_U32(ctx, 3));
    // 0x300f20: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x300f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x300f24: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x300f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x300f28: 0x24540b40  addiu       $s4, $v0, 0xB40
    ctx->pc = 0x300f28u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 2880));
    // 0x300f2c: 0xa2800000  sb          $zero, 0x0($s4)
    ctx->pc = 0x300f2cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x300f30: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x300f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x300f34: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x300f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x300f38: 0x24540bd0  addiu       $s4, $v0, 0xBD0
    ctx->pc = 0x300f38u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 3024));
    // 0x300f3c: 0xa2800000  sb          $zero, 0x0($s4)
    ctx->pc = 0x300f3cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x300f40: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x300f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x300f44: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x300f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x300f48: 0x24540c60  addiu       $s4, $v0, 0xC60
    ctx->pc = 0x300f48u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 3168));
    // 0x300f4c: 0xa2800000  sb          $zero, 0x0($s4)
    ctx->pc = 0x300f4cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x300f50: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x300f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x300f54: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x300f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x300f58: 0x24540ab0  addiu       $s4, $v0, 0xAB0
    ctx->pc = 0x300f58u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 2736));
    // 0x300f5c: 0xa2800000  sb          $zero, 0x0($s4)
    ctx->pc = 0x300f5cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x300f60: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x300f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x300f64: 0x90421308  lbu         $v0, 0x1308($v0)
    ctx->pc = 0x300f64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4872)));
    // 0x300f68: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x300f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x300f6c: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x300f6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x300f70: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x300F70u;
    {
        const bool branch_taken_0x300f70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x300f70) {
            ctx->pc = 0x300FA4u;
            return;
        }
    }
    ctx->pc = 0x300F78u;
    // 0x300f78: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x300f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x300f7c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x300f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x300f80: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x300f80u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x300f84: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x300f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x300f88: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x300f88u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x300f8c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x300f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x300f90: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x300f90u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x300f94: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x300f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x300f98: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x300f98u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x300f9c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x300f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x300fa0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x300fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x300fa4u;
}
