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

// Function: entry_002e00bc
// Address: 0x2e00bc - 0x2e0168
void entry_002e00bc_0x2e00bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e00bc_0x2e00bc");
#endif

    switch (ctx->pc) {
        case 0x2e00ccu: goto label_2e00cc;
        case 0x2e00d8u: goto label_2e00d8;
        default: break;
    }

    ctx->pc = 0x2e00bcu;

    // 0x2e00bc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2e00bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e00c0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2e00c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2e00c4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2E00C4u;
    SET_GPR_U32(ctx, 31, 0x2E00CCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2E00C4u, 0x2E00CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E00CCu;
label_2e00cc:
    // 0x2e00cc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2e00ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e00d0: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2E00D0u;
    SET_GPR_U32(ctx, 31, 0x2E00D8u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2E00D0u, 0x2E00D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E00D8u;
label_2e00d8:
    // 0x2e00d8: 0x8e2300ac  lw          $v1, 0xAC($s1)
    ctx->pc = 0x2e00d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
    // 0x2e00dc: 0x1060004a  beqz        $v1, . + 4 + (0x4A << 2)
    ctx->pc = 0x2E00DCu;
    {
        const bool branch_taken_0x2e00dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e00dc) {
            ctx->pc = 0x2E0208u;
            return;
        }
    }
    ctx->pc = 0x2E00E4u;
    // 0x2e00e4: 0x8e3000ac  lw          $s0, 0xAC($s1)
    ctx->pc = 0x2e00e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
    // 0x2e00e8: 0x860410a6  lh          $a0, 0x10A6($s0)
    ctx->pc = 0x2e00e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4262)));
    // 0x2e00ec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2e00ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e00f0: 0xa46410a6  sh          $a0, 0x10A6($v1)
    ctx->pc = 0x2e00f0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4262), (uint16_t)GPR_U32(ctx, 4));
    // 0x2e00f4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2e00f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e00f8: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2e00f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2e00fc: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x2e00fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x2e0100: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2e0100u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2e0104: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x2E0104u;
    {
        const bool branch_taken_0x2e0104 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0104) {
            ctx->pc = 0x2E0170u;
            return;
        }
    }
    ctx->pc = 0x2E010Cu;
    // 0x2e010c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2e010cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2e0110: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x2e0110u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x2e0114: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2e0114u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2e0118: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2E0118u;
    {
        const bool branch_taken_0x2e0118 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0118) {
            ctx->pc = 0x2E0168u;
            return;
        }
    }
    ctx->pc = 0x2E0120u;
    // 0x2e0120: 0x860310a6  lh          $v1, 0x10A6($s0)
    ctx->pc = 0x2e0120u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4262)));
    // 0x2e0124: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2e0124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2e0128: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2e0128u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2e012c: 0x461000e  bgez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2E012Cu;
    {
        const bool branch_taken_0x2e012c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2e012c) {
            ctx->pc = 0x2E0168u;
            return;
        }
    }
    ctx->pc = 0x2E0134u;
    // 0x2e0134: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2e0134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e0138: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2e0138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e013c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2e013cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e0140: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e0140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e0144: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2e0144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e0148: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2e0148u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e014c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2e014cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e0150: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2e0150u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e0154: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2e0154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e0158: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2e0158u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e015c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2e015cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e0160: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2e0160u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2e0164: 0xae2000b0  sw          $zero, 0xB0($s1)
    ctx->pc = 0x2e0164u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 0));
    ctx->pc = 0x2e0168u;
}
