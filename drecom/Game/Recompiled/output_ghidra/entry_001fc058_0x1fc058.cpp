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

// Function: entry_001fc058
// Address: 0x1fc058 - 0x1fc0d4
void entry_001fc058_0x1fc058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fc058_0x1fc058");
#endif

    ctx->pc = 0x1fc058u;

    // 0x1fc058: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fc058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fc05c: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x1fc05cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x1fc060: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fc060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fc064: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x1fc064u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1fc068: 0x1460ffcc  bnez        $v1, . + 4 + (-0x34 << 2)
    ctx->pc = 0x1FC068u;
    {
        const bool branch_taken_0x1fc068 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fc068) {
            ctx->pc = 0x1FBF9Cu;
            return;
        }
    }
    ctx->pc = 0x1FC070u;
    // 0x1fc070: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fc070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fc074: 0x90640347  lbu         $a0, 0x347($v1)
    ctx->pc = 0x1fc074u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 839)));
    // 0x1fc078: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fc078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fc07c: 0xa0640348  sb          $a0, 0x348($v1)
    ctx->pc = 0x1fc07cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 840), (uint8_t)GPR_U32(ctx, 4));
    // 0x1fc080: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fc080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fc084: 0x90630345  lbu         $v1, 0x345($v1)
    ctx->pc = 0x1fc084u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 837)));
    // 0x1fc088: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1fc088u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fc08c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fc08cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fc090: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x1fc090u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x1fc094: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fc094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fc098: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1fc098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1fc09c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1fc09cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fc0a0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fc0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fc0a4: 0xa0640346  sb          $a0, 0x346($v1)
    ctx->pc = 0x1fc0a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 838), (uint8_t)GPR_U32(ctx, 4));
    // 0x1fc0a8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fc0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fc0ac: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x1fc0acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x1fc0b0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fc0b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fc0b4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1fc0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1fc0b8: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x1fc0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x1fc0bc: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1fc0bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fc0c0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fc0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fc0c4: 0xa064034b  sb          $a0, 0x34B($v1)
    ctx->pc = 0x1fc0c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 843), (uint8_t)GPR_U32(ctx, 4));
    // 0x1fc0c8: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1fc0c8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fc0cc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1FC0CCu;
    {
        const bool branch_taken_0x1fc0cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc0cc) {
            ctx->pc = 0x1FC110u;
            return;
        }
    }
    ctx->pc = 0x1FC0D4u;
}
