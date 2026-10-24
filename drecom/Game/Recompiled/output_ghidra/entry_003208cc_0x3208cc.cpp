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

// Function: entry_003208cc
// Address: 0x3208cc - 0x320940
void entry_003208cc_0x3208cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003208cc_0x3208cc");
#endif

    ctx->pc = 0x3208ccu;

    // 0x3208cc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3208ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3208d0: 0x9063034f  lbu         $v1, 0x34F($v1)
    ctx->pc = 0x3208d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 847)));
    // 0x3208d4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3208d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3208d8: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x3208d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3208dc: 0x14830037  bne         $a0, $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x3208DCu;
    {
        const bool branch_taken_0x3208dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3208dc) {
            ctx->pc = 0x3209BCu;
            return;
        }
    }
    ctx->pc = 0x3208E4u;
    // 0x3208e4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3208e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3208e8: 0x8c630364  lw          $v1, 0x364($v1)
    ctx->pc = 0x3208e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 868)));
    // 0x3208ec: 0x1460002d  bnez        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x3208ECu;
    {
        const bool branch_taken_0x3208ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3208ec) {
            ctx->pc = 0x3209A4u;
            return;
        }
    }
    ctx->pc = 0x3208F4u;
    // 0x3208f4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3208f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3208f8: 0x90830348  lbu         $v1, 0x348($a0)
    ctx->pc = 0x3208f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 840)));
    // 0x3208fc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3208fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x320900: 0xa0830348  sb          $v1, 0x348($a0)
    ctx->pc = 0x320900u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 840), (uint8_t)GPR_U32(ctx, 3));
    // 0x320904: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320908: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x320908u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x32090c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x32090cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x320910: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x320910u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x320914: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x320914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x320918: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x320918u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32091c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x32091cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320920: 0xa064034b  sb          $a0, 0x34B($v1)
    ctx->pc = 0x320920u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 843), (uint8_t)GPR_U32(ctx, 4));
    // 0x320924: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x320924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320928: 0x90830345  lbu         $v1, 0x345($a0)
    ctx->pc = 0x320928u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 837)));
    // 0x32092c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x32092cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x320930: 0xa0830345  sb          $v1, 0x345($a0)
    ctx->pc = 0x320930u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 837), (uint8_t)GPR_U32(ctx, 3));
    // 0x320934: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x320934u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x320938: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x320938u;
    {
        const bool branch_taken_0x320938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x320938) {
            ctx->pc = 0x320978u;
            return;
        }
    }
    ctx->pc = 0x320940u;
}
