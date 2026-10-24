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

// Function: entry_0018a1b4
// Address: 0x18a1b4 - 0x18a200
void entry_0018a1b4_0x18a1b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018a1b4_0x18a1b4");
#endif

    ctx->pc = 0x18a1b4u;

    // 0x18a1b4: 0x92220029  lbu         $v0, 0x29($s1)
    ctx->pc = 0x18a1b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 41)));
    // 0x18a1b8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18a1b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18a1bc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x18a1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x18a1c0: 0x9222002a  lbu         $v0, 0x2A($s1)
    ctx->pc = 0x18a1c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 42)));
    // 0x18a1c4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18a1c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18a1c8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x18a1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x18a1cc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18a1ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18a1d0: 0xa222000c  sb          $v0, 0xC($s1)
    ctx->pc = 0x18a1d0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x18a1d4: 0x9222002b  lbu         $v0, 0x2B($s1)
    ctx->pc = 0x18a1d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 43)));
    // 0x18a1d8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18a1d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18a1dc: 0x2442006e  addiu       $v0, $v0, 0x6E
    ctx->pc = 0x18a1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 110));
    // 0x18a1e0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18a1e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18a1e4: 0xa222000d  sb          $v0, 0xD($s1)
    ctx->pc = 0x18a1e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 13), (uint8_t)GPR_U32(ctx, 2));
    // 0x18a1e8: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x18a1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x18a1ec: 0x24421b00  addiu       $v0, $v0, 0x1B00
    ctx->pc = 0x18a1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6912));
    // 0x18a1f0: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x18a1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x18a1f4: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x18a1f4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x18a1f8: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x18A1F8u;
    {
        const bool branch_taken_0x18a1f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a1f8) {
            ctx->pc = 0x18A288u;
            return;
        }
    }
    ctx->pc = 0x18A200u;
}
