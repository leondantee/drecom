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

// Function: entry_002d0b68
// Address: 0x2d0b68 - 0x2d0bf4
void entry_002d0b68_0x2d0b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d0b68_0x2d0b68");
#endif

    switch (ctx->pc) {
        case 0x2d0b94u: goto label_2d0b94;
        default: break;
    }

    ctx->pc = 0x2d0b68u;

    // 0x2d0b68: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2d0b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d0b6c: 0xac401334  sw          $zero, 0x1334($v0)
    ctx->pc = 0x2d0b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4916), GPR_U32(ctx, 0));
    // 0x2d0b70: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2d0b70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2d0b74: 0x24438330  addiu       $v1, $v0, -0x7CD0
    ctx->pc = 0x2d0b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935344));
    // 0x2d0b78: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2d0b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d0b7c: 0xac430354  sw          $v1, 0x354($v0)
    ctx->pc = 0x2d0b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 852), GPR_U32(ctx, 3));
    // 0x2d0b80: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2d0b80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d0b84: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2d0b84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2d0b88: 0x244582d0  addiu       $a1, $v0, -0x7D30
    ctx->pc = 0x2d0b88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935248));
    // 0x2d0b8c: 0xc099c30  jal         func_2670C0
    ctx->pc = 0x2D0B8Cu;
    SET_GPR_U32(ctx, 31, 0x2D0B94u);
    ctx->pc = 0x2670C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2670C0u, 0x2D0B8Cu, 0x2D0B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0B94u;
label_2d0b94:
    // 0x2d0b94: 0x3c11005d  lui         $s1, 0x5D
    ctx->pc = 0x2d0b94u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)93 << 16));
    // 0x2d0b98: 0x26230ae8  addiu       $v1, $s1, 0xAE8
    ctx->pc = 0x2d0b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 2792));
    // 0x2d0b9c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2d0b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x2d0ba0: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x2d0ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x2d0ba4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2d0ba4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x2d0ba8: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x2d0ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x2d0bac: 0x24820ae8  addiu       $v0, $a0, 0xAE8
    ctx->pc = 0x2d0bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2792));
    // 0x2d0bb0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2d0bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x2d0bb4: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x2d0bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x2d0bb8: 0x851824  and         $v1, $a0, $a1
    ctx->pc = 0x2d0bb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x2d0bbc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2d0bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2d0bc0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2d0bc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2d0bc4: 0x8c230ae8  lw          $v1, 0xAE8($at)
    ctx->pc = 0x2d0bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x2d0bc8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2d0bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d0bcc: 0x2442134c  addiu       $v0, $v0, 0x134C
    ctx->pc = 0x2d0bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4940));
    // 0x2d0bd0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2d0bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2d0bd4: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x2d0bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x2d0bd8: 0x24430ae8  addiu       $v1, $v0, 0xAE8
    ctx->pc = 0x2d0bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x2d0bdc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2d0bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x2d0be0: 0x244201d0  addiu       $v0, $v0, 0x1D0
    ctx->pc = 0x2d0be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 464));
    // 0x2d0be4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2d0be4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x2d0be8: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x2d0be8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d0bec: 0x10000106  b           . + 4 + (0x106 << 2)
    ctx->pc = 0x2D0BECu;
    {
        const bool branch_taken_0x2d0bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d0bec) {
            ctx->pc = 0x2D1008u;
            return;
        }
    }
    ctx->pc = 0x2D0BF4u;
}
