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

// Function: entry_002655b0
// Address: 0x2655b0 - 0x265630
void entry_002655b0_0x2655b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002655b0_0x2655b0");
#endif

    ctx->pc = 0x2655b0u;

    // 0x2655b0: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x2655b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x2655b4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2655b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2655b8: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2655b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2655bc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2655bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x2655c0: 0x2442e650  addiu       $v0, $v0, -0x19B0
    ctx->pc = 0x2655c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960720));
    // 0x2655c4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x2655c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2655c8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2655c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2655cc: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x2655ccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x2655d0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2655d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2655d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2655d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2655d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2655d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2655dc: 0x442821  addu        $a1, $v0, $a0
    ctx->pc = 0x2655dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2655e0: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x2655e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x2655e4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2655e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2655e8: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2655e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2655ec: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2655ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x2655f0: 0x2442e650  addiu       $v0, $v0, -0x19B0
    ctx->pc = 0x2655f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960720));
    // 0x2655f4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x2655f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2655f8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2655f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2655fc: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x2655fcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x265600: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x265600u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x265604: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x265604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x265608: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x265608u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x26560c: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x26560cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x265610: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x265610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x265614: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x265614u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x265618: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x265618u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x26561c: 0x8ca415b4  lw          $a0, 0x15B4($a1)
    ctx->pc = 0x26561cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 5556)));
    // 0x265620: 0x8c6515ac  lw          $a1, 0x15AC($v1)
    ctx->pc = 0x265620u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5548)));
    // 0x265624: 0x240603ff  addiu       $a2, $zero, 0x3FF
    ctx->pc = 0x265624u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x265628: 0xc06afa0  jal         func_1ABE80
    ctx->pc = 0x265628u;
    SET_GPR_U32(ctx, 31, 0x265630u);
    ctx->pc = 0x1ABE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABE80u, 0x265628u, 0x265630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265630u;
}
