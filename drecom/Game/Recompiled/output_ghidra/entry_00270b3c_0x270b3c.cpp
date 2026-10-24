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

// Function: entry_00270b3c
// Address: 0x270b3c - 0x270c20
void entry_00270b3c_0x270b3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00270b3c_0x270b3c");
#endif

    switch (ctx->pc) {
        case 0x270ba0u: goto label_270ba0;
        default: break;
    }

    ctx->pc = 0x270b3cu;

    // 0x270b3c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x270b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270b40: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x270b40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x270b44: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x270b44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x270b48: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x270b48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x270b4c: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x270B4Cu;
    {
        const bool branch_taken_0x270b4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x270b4c) {
            ctx->pc = 0x270C20u;
            return;
        }
    }
    ctx->pc = 0x270B54u;
    // 0x270b54: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x270b54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x270b58: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x270b58u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x270b5c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x270b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x270b60: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x270b60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x270b64: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x270b64u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x270b68: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x270b68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x270b6c: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x270b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x270b70: 0x2402dfff  addiu       $v0, $zero, -0x2001
    ctx->pc = 0x270b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
    // 0x270b74: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x270b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x270b78: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x270b78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x270b7c: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x270b7cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x270b80: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x270b80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270b84: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x270b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270b88: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x270b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270b8c: 0x8c841344  lw          $a0, 0x1344($a0)
    ctx->pc = 0x270b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4932)));
    // 0x270b90: 0x8c651334  lw          $a1, 0x1334($v1)
    ctx->pc = 0x270b90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4916)));
    // 0x270b94: 0x8c46133c  lw          $a2, 0x133C($v0)
    ctx->pc = 0x270b94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4924)));
    // 0x270b98: 0xc050f5c  jal         func_143D70
    ctx->pc = 0x270B98u;
    SET_GPR_U32(ctx, 31, 0x270BA0u);
    ctx->pc = 0x143D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143D70u, 0x270B98u, 0x270BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270BA0u;
label_270ba0:
    // 0x270ba0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x270ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x270ba4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x270ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270ba8: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x270ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x270bac: 0xa0430090  sb          $v1, 0x90($v0)
    ctx->pc = 0x270bacu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 144), (uint8_t)GPR_U32(ctx, 3));
    // 0x270bb0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x270bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270bb4: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x270bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x270bb8: 0xa0400630  sb          $zero, 0x630($v0)
    ctx->pc = 0x270bb8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1584), (uint8_t)GPR_U32(ctx, 0));
    // 0x270bbc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x270bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x270bc0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x270bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270bc4: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x270bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x270bc8: 0xa04307e0  sb          $v1, 0x7E0($v0)
    ctx->pc = 0x270bc8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2016), (uint8_t)GPR_U32(ctx, 3));
    // 0x270bcc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x270bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x270bd0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x270bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270bd4: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x270bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x270bd8: 0xa0430870  sb          $v1, 0x870($v0)
    ctx->pc = 0x270bd8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2160), (uint8_t)GPR_U32(ctx, 3));
    // 0x270bdc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x270bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x270be0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x270be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270be4: 0xac431b64  sw          $v1, 0x1B64($v0)
    ctx->pc = 0x270be4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7012), GPR_U32(ctx, 3));
    // 0x270be8: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x270be8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x270bec: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x270becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270bf0: 0xac431b6c  sw          $v1, 0x1B6C($v0)
    ctx->pc = 0x270bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7020), GPR_U32(ctx, 3));
    // 0x270bf4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x270bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270bf8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x270bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x270bfc: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x270bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x270c00: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x270c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x270c04: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x270c04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x270c08: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x270c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x270c0c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x270c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270c10: 0xa44313c0  sh          $v1, 0x13C0($v0)
    ctx->pc = 0x270c10u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 5056), (uint16_t)GPR_U32(ctx, 3));
    // 0x270c14: 0x2403ffc0  addiu       $v1, $zero, -0x40
    ctx->pc = 0x270c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x270c18: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x270c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270c1c: 0xa44313c2  sh          $v1, 0x13C2($v0)
    ctx->pc = 0x270c1cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 5058), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x270c20u;
}
