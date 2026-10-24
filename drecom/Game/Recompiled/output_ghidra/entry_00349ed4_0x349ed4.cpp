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

// Function: entry_00349ed4
// Address: 0x349ed4 - 0x349f44
void entry_00349ed4_0x349ed4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00349ed4_0x349ed4");
#endif

    ctx->pc = 0x349ed4u;

    // 0x349ed4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x349ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x349ed8: 0x8fb00038  lw          $s0, 0x38($sp)
    ctx->pc = 0x349ed8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349edc: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x349edcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x349ee0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x349ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x349ee4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x349ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349ee8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x349ee8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x349eec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x349eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349ef0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x349ef0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x349ef4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x349ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349ef8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x349ef8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x349efc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x349efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349f00: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x349f00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x349f04: 0x24040078  addiu       $a0, $zero, 0x78
    ctx->pc = 0x349f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x349f08: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x349f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349f0c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x349f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x349f10: 0xa4640068  sh          $a0, 0x68($v1)
    ctx->pc = 0x349f10u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 104), (uint16_t)GPR_U32(ctx, 4));
    // 0x349f14: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x349f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349f18: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x349f18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x349f1c: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x349f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x349f20: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x349f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x349f24: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x349f24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x349f28: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x349f28u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x349f2c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x349f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349f30: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x349f30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x349f34: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x349f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x349f38: 0x2404ffdf  addiu       $a0, $zero, -0x21
    ctx->pc = 0x349f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x349f3c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x349f3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x349f40: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x349f40u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    ctx->pc = 0x349f44u;
}
