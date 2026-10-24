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

// Function: entry_0017a1d0
// Address: 0x17a1d0 - 0x17a25c
void entry_0017a1d0_0x17a1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a1d0_0x17a1d0");
#endif

    ctx->pc = 0x17a1d0u;

    // 0x17a1d0: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x17a1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x17a1d4: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x17a1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x17a1d8: 0x106200a1  beq         $v1, $v0, . + 4 + (0xA1 << 2)
    ctx->pc = 0x17A1D8u;
    {
        const bool branch_taken_0x17a1d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x17a1d8) {
            ctx->pc = 0x17A460u;
            return;
        }
    }
    ctx->pc = 0x17A1E0u;
    // 0x17a1e0: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x17a1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x17a1e4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x17a1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17a1e8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x17a1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17a1ec: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x17a1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17a1f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17a1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17a1f4: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x17a1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x17a1f8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x17a1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x17a1fc: 0x2442cca0  addiu       $v0, $v0, -0x3360
    ctx->pc = 0x17a1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954144));
    // 0x17a200: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x17a200u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17a204: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17a204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17a208: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x17a208u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x17a20c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17a20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17a210: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x17a210u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x17a214: 0x26220008  addiu       $v0, $s1, 0x8
    ctx->pc = 0x17a214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x17a218: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x17a218u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17a21c: 0x27a200a8  addiu       $v0, $sp, 0xA8
    ctx->pc = 0x17a21cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x17a220: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x17a220u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x17a224: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x17a224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x17a228: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x17A228u;
    {
        const bool branch_taken_0x17a228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a228) {
            ctx->pc = 0x17A288u;
            return;
        }
    }
    ctx->pc = 0x17A230u;
    // 0x17a230: 0x97a200aa  lhu         $v0, 0xAA($sp)
    ctx->pc = 0x17a230u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 170)));
    // 0x17a234: 0x215bc  dsll32      $v0, $v0, 22
    ctx->pc = 0x17a234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 22));
    // 0x17a238: 0x21ebe  dsrl32      $v1, $v0, 26
    ctx->pc = 0x17a238u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> (32 + 26));
    // 0x17a23c: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x17a23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x17a240: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x17A240u;
    {
        const bool branch_taken_0x17a240 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x17a240) {
            ctx->pc = 0x17A270u;
            return;
        }
    }
    ctx->pc = 0x17A248u;
    // 0x17a248: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x17a248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x17a24c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17A24Cu;
    {
        const bool branch_taken_0x17a24c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x17a24c) {
            ctx->pc = 0x17A25Cu;
            return;
        }
    }
    ctx->pc = 0x17A254u;
    // 0x17a254: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x17A254u;
    {
        const bool branch_taken_0x17a254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a254) {
            ctx->pc = 0x17A284u;
            return;
        }
    }
    ctx->pc = 0x17A25Cu;
}
