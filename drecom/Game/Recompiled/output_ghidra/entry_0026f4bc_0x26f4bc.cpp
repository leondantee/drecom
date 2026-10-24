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

// Function: entry_0026f4bc
// Address: 0x26f4bc - 0x26f55c
void entry_0026f4bc_0x26f4bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026f4bc_0x26f4bc");
#endif

    switch (ctx->pc) {
        case 0x26f510u: goto label_26f510;
        default: break;
    }

    ctx->pc = 0x26f4bcu;

    // 0x26f4bc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26f4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f4c0: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x26f4c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x26f4c4: 0x106000d7  beqz        $v1, . + 4 + (0xD7 << 2)
    ctx->pc = 0x26F4C4u;
    {
        const bool branch_taken_0x26f4c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f4c4) {
            ctx->pc = 0x26F824u;
            return;
        }
    }
    ctx->pc = 0x26F4CCu;
    // 0x26f4cc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26f4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f4d0: 0xa04010a8  sb          $zero, 0x10A8($v0)
    ctx->pc = 0x26f4d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x26f4d4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x26f4d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x26f4d8: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x26f4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x26f4dc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x26f4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x26f4e0: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x26f4e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x26f4e4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x26f4e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x26f4e8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x26f4e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x26f4ec: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x26f4ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x26f4f0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26f4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f4f4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26f4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f4f8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26f4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f4fc: 0x8c841340  lw          $a0, 0x1340($a0)
    ctx->pc = 0x26f4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4928)));
    // 0x26f500: 0x8c651330  lw          $a1, 0x1330($v1)
    ctx->pc = 0x26f500u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4912)));
    // 0x26f504: 0x8c461338  lw          $a2, 0x1338($v0)
    ctx->pc = 0x26f504u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4920)));
    // 0x26f508: 0xc050f5c  jal         func_143D70
    ctx->pc = 0x26F508u;
    SET_GPR_U32(ctx, 31, 0x26F510u);
    ctx->pc = 0x143D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143D70u, 0x26F508u, 0x26F510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F510u;
label_26f510:
    // 0x26f510: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26f510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f514: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x26f514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x26f518: 0xa0600090  sb          $zero, 0x90($v1)
    ctx->pc = 0x26f518u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 144), (uint8_t)GPR_U32(ctx, 0));
    // 0x26f51c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26f51cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f520: 0xac6013e8  sw          $zero, 0x13E8($v1)
    ctx->pc = 0x26f520u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5096), GPR_U32(ctx, 0));
    // 0x26f524: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26f524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f528: 0xac6013ec  sw          $zero, 0x13EC($v1)
    ctx->pc = 0x26f528u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5100), GPR_U32(ctx, 0));
    // 0x26f52c: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x26f52cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f530: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x26f530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x26f534: 0x3c03ff7f  lui         $v1, 0xFF7F
    ctx->pc = 0x26f534u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65407 << 16));
    // 0x26f538: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x26f538u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x26f53c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x26f53cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x26f540: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x26f540u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x26f544: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26f544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f548: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x26f548u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x26f54c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26f54cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26f550: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x26f550u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x26f554: 0x100000b3  b           . + 4 + (0xB3 << 2)
    ctx->pc = 0x26F554u;
    {
        const bool branch_taken_0x26f554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f554) {
            ctx->pc = 0x26F824u;
            return;
        }
    }
    ctx->pc = 0x26F55Cu;
}
