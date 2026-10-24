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

// Function: entry_001d12c8
// Address: 0x1d12c8 - 0x1d133c
void entry_001d12c8_0x1d12c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d12c8_0x1d12c8");
#endif

    switch (ctx->pc) {
        case 0x1d1318u: goto label_1d1318;
        default: break;
    }

    ctx->pc = 0x1d12c8u;

    // 0x1d12c8: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1d12c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1d12cc: 0x8c85005c  lw          $a1, 0x5C($a0)
    ctx->pc = 0x1d12ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x1d12d0: 0x30a6ffff  andi        $a2, $a1, 0xFFFF
    ctx->pc = 0x1d12d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1d12d4: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x1d12d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x1d12d8: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x1d12d8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d12dc: 0x3223ffff  andi        $v1, $s1, 0xFFFF
    ctx->pc = 0x1d12dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x1d12e0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1d12e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1d12e4: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x1d12e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1d12e8: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1d12e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x1d12ec: 0x24838a80  addiu       $v1, $a0, -0x7580
    ctx->pc = 0x1d12ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937216));
    // 0x1d12f0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1d12f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1d12f4: 0xafa300ec  sw          $v1, 0xEC($sp)
    ctx->pc = 0x1d12f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 3));
    // 0x1d12f8: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x1d12f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1d12fc: 0x8fa400dc  lw          $a0, 0xDC($sp)
    ctx->pc = 0x1d12fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x1d1300: 0x8fa500ec  lw          $a1, 0xEC($sp)
    ctx->pc = 0x1d1300u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x1d1304: 0x8fa600f0  lw          $a2, 0xF0($sp)
    ctx->pc = 0x1d1304u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1d1308: 0xc46c0050  lwc1        $f12, 0x50($v1)
    ctx->pc = 0x1d1308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d130c: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x1d130cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1d1310: 0xc06c6e8  jal         func_1B1BA0
    ctx->pc = 0x1D1310u;
    SET_GPR_U32(ctx, 31, 0x1D1318u);
    ctx->pc = 0x1B1BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1BA0u, 0x1D1310u, 0x1D1318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1318u;
label_1d1318:
    // 0x1d1318: 0xafa200e4  sw          $v0, 0xE4($sp)
    ctx->pc = 0x1d1318u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 2));
    // 0x1d131c: 0x8fa400e4  lw          $a0, 0xE4($sp)
    ctx->pc = 0x1d131cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x1d1320: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1d1320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1d1324: 0x1083004e  beq         $a0, $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x1D1324u;
    {
        const bool branch_taken_0x1d1324 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d1324) {
            ctx->pc = 0x1D1460u;
            return;
        }
    }
    ctx->pc = 0x1D132Cu;
    // 0x1d132c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D132Cu;
    {
        const bool branch_taken_0x1d132c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d132c) {
            ctx->pc = 0x1D133Cu;
            return;
        }
    }
    ctx->pc = 0x1D1334u;
    // 0x1d1334: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x1D1334u;
    {
        const bool branch_taken_0x1d1334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1334) {
            ctx->pc = 0x1D1544u;
            return;
        }
    }
    ctx->pc = 0x1D133Cu;
}
