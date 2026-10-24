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

// Function: entry_002d1b3c
// Address: 0x2d1b3c - 0x2d1bec
void entry_002d1b3c_0x2d1b3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d1b3c_0x2d1b3c");
#endif

    switch (ctx->pc) {
        case 0x2d1b68u: goto label_2d1b68;
        default: break;
    }

    ctx->pc = 0x2d1b3cu;

    // 0x2d1b3c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d1b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1b40: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x2d1b40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d1b44: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1b48: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x2d1b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x2d1b4c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2d1b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2d1b50: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2d1b50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2d1b54: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x2d1b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x2d1b58: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2d1b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d1b5c: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x2d1b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x2d1b60: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x2D1B60u;
    SET_GPR_U32(ctx, 31, 0x2D1B68u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x2D1B60u, 0x2D1B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1B68u;
label_2d1b68:
    // 0x2d1b68: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2D1B68u;
    {
        const bool branch_taken_0x2d1b68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1b68) {
            ctx->pc = 0x2D1BECu;
            return;
        }
    }
    ctx->pc = 0x2D1B70u;
    // 0x2d1b70: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d1b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1b74: 0x8c421334  lw          $v0, 0x1334($v0)
    ctx->pc = 0x2d1b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4916)));
    // 0x2d1b78: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2d1b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2d1b7c: 0x14400050  bnez        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x2D1B7Cu;
    {
        const bool branch_taken_0x2d1b7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d1b7c) {
            ctx->pc = 0x2D1CC0u;
            return;
        }
    }
    ctx->pc = 0x2D1B84u;
    // 0x2d1b84: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d1b84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1b88: 0x8c831334  lw          $v1, 0x1334($a0)
    ctx->pc = 0x2d1b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4916)));
    // 0x2d1b8c: 0x2402ff85  addiu       $v0, $zero, -0x7B
    ctx->pc = 0x2d1b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967173));
    // 0x2d1b90: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2d1b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2d1b94: 0xac821334  sw          $v0, 0x1334($a0)
    ctx->pc = 0x2d1b94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4916), GPR_U32(ctx, 2));
    // 0x2d1b98: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1b9c: 0x8c621334  lw          $v0, 0x1334($v1)
    ctx->pc = 0x2d1b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4916)));
    // 0x2d1ba0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2d1ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2d1ba4: 0xac621334  sw          $v0, 0x1334($v1)
    ctx->pc = 0x2d1ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4916), GPR_U32(ctx, 2));
    // 0x2d1ba8: 0x240300c8  addiu       $v1, $zero, 0xC8
    ctx->pc = 0x2d1ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x2d1bac: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d1bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1bb0: 0xac431338  sw          $v1, 0x1338($v0)
    ctx->pc = 0x2d1bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4920), GPR_U32(ctx, 3));
    // 0x2d1bb4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d1bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d1bb8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d1bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1bbc: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2d1bbcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d1bc0: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x2d1bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2d1bc4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d1bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1bc8: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2d1bc8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d1bcc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d1bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1bd0: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2d1bd0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d1bd4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d1bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1bd8: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2d1bd8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d1bdc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d1bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1be0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2d1be0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2d1be4: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x2D1BE4u;
    {
        const bool branch_taken_0x2d1be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1be4) {
            ctx->pc = 0x2D1CC0u;
            return;
        }
    }
    ctx->pc = 0x2D1BECu;
}
