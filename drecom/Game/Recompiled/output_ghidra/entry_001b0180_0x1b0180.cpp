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

// Function: entry_001b0180
// Address: 0x1b0180 - 0x1b01d4
void entry_001b0180_0x1b0180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0180_0x1b0180");
#endif

    ctx->pc = 0x1b0180u;

    // 0x1b0180: 0x8fa404a8  lw          $a0, 0x4A8($sp)
    ctx->pc = 0x1b0180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1192)));
    // 0x1b0184: 0x8fa304c8  lw          $v1, 0x4C8($sp)
    ctx->pc = 0x1b0184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1224)));
    // 0x1b0188: 0x8c63005c  lw          $v1, 0x5C($v1)
    ctx->pc = 0x1b0188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x1b018c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1b018cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b0190: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1b0190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1b0194: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1b0194u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1b0198: 0x1460ffc7  bnez        $v1, . + 4 + (-0x39 << 2)
    ctx->pc = 0x1B0198u;
    {
        const bool branch_taken_0x1b0198 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b0198) {
            ctx->pc = 0x1B00B8u;
            return;
        }
    }
    ctx->pc = 0x1B01A0u;
    // 0x1b01a0: 0x8ee30a68  lw          $v1, 0xA68($s7)
    ctx->pc = 0x1b01a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 2664)));
    // 0x1b01a4: 0x2464000f  addiu       $a0, $v1, 0xF
    ctx->pc = 0x1b01a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1b01a8: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x1b01a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1b01ac: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1b01acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1b01b0: 0xaee30a68  sw          $v1, 0xA68($s7)
    ctx->pc = 0x1b01b0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 2664), GPR_U32(ctx, 3));
    // 0x1b01b4: 0x8fa304c8  lw          $v1, 0x4C8($sp)
    ctx->pc = 0x1b01b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1224)));
    // 0x1b01b8: 0x8c63008c  lw          $v1, 0x8C($v1)
    ctx->pc = 0x1b01b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
    // 0x1b01bc: 0xafa30498  sw          $v1, 0x498($sp)
    ctx->pc = 0x1b01bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1176), GPR_U32(ctx, 3));
    // 0x1b01c0: 0x8fa30498  lw          $v1, 0x498($sp)
    ctx->pc = 0x1b01c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1176)));
    // 0x1b01c4: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x1b01c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1b01c8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1b01c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1b01cc: 0xa7a304be  sh          $v1, 0x4BE($sp)
    ctx->pc = 0x1b01ccu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 1214), (uint16_t)GPR_U32(ctx, 3));
    // 0x1b01d0: 0xafa004a8  sw          $zero, 0x4A8($sp)
    ctx->pc = 0x1b01d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1192), GPR_U32(ctx, 0));
    ctx->pc = 0x1b01d4u;
}
