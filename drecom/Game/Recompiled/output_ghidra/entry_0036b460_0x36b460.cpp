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

// Function: entry_0036b460
// Address: 0x36b460 - 0x36b578
void entry_0036b460_0x36b460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036b460_0x36b460");
#endif

    switch (ctx->pc) {
        case 0x36b484u: goto label_36b484;
        default: break;
    }

    ctx->pc = 0x36b460u;

    // 0x36b460: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x36b460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x36b464: 0x8c221a9c  lw          $v0, 0x1A9C($at)
    ctx->pc = 0x36b464u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A9Cu));
    // 0x36b468: 0x2107c  dsll32      $v0, $v0, 1
    ctx->pc = 0x36b468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 1));
    // 0x36b46c: 0x2107e  dsrl32      $v0, $v0, 1
    ctx->pc = 0x36b46cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 1));
    // 0x36b470: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x36b470u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x36b474: 0xac221a9c  sw          $v0, 0x1A9C($at)
    ctx->pc = 0x36b474u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A9Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A9Cu, _value); } while (0);
    // 0x36b478: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x36b478u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36b47c: 0xc05db9c  jal         func_176E70
    ctx->pc = 0x36B47Cu;
    SET_GPR_U32(ctx, 31, 0x36B484u);
    ctx->pc = 0x176E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176E70u, 0x36B47Cu, 0x36B484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B484u;
label_36b484:
    // 0x36b484: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x36b484u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x36b488: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x36b488u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x36b48c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x36b48cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x36b490: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x36b490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x36b494: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x36b494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x36b498: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x36b498u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x36b49c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x36b49cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x36b4a0: 0xa0204f11  sb          $zero, 0x4F11($at)
    ctx->pc = 0x36b4a0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3F4F11u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3F4F11u, _value); } while (0);
    // 0x36b4a4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x36b4a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x36b4a8: 0x9022e652  lbu         $v0, -0x19AE($at)
    ctx->pc = 0x36b4a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x61E652u));
    // 0x36b4ac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36b4acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36b4b0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x36b4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x36b4b4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x36b4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x36b4b8: 0x2442e650  addiu       $v0, $v0, -0x19B0
    ctx->pc = 0x36b4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960720));
    // 0x36b4bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36b4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36b4c0: 0x8c431390  lw          $v1, 0x1390($v0)
    ctx->pc = 0x36b4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5008)));
    // 0x36b4c4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x36b4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x36b4c8: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x36b4c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x36b4cc: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x36b4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x36b4d0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x36b4d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x36b4d4: 0x9022e652  lbu         $v0, -0x19AE($at)
    ctx->pc = 0x36b4d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x61E652u));
    // 0x36b4d8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36b4d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36b4dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x36b4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x36b4e0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x36b4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x36b4e4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x36b4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x36b4e8: 0x2442e650  addiu       $v0, $v0, -0x19B0
    ctx->pc = 0x36b4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960720));
    // 0x36b4ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36b4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36b4f0: 0x8c431390  lw          $v1, 0x1390($v0)
    ctx->pc = 0x36b4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5008)));
    // 0x36b4f4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x36b4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x36b4f8: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x36b4f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x36b4fc: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x36b4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x36b500: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x36b500u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x36b504: 0x9022e652  lbu         $v0, -0x19AE($at)
    ctx->pc = 0x36b504u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x61E652u));
    // 0x36b508: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36b508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36b50c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x36b50cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x36b510: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x36b510u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x36b514: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x36b514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x36b518: 0x2442e650  addiu       $v0, $v0, -0x19B0
    ctx->pc = 0x36b518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960720));
    // 0x36b51c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36b51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36b520: 0x8c431390  lw          $v1, 0x1390($v0)
    ctx->pc = 0x36b520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5008)));
    // 0x36b524: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x36b524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x36b528: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x36b528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x36b52c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x36b52cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x36b530: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x36b530u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x36b534: 0x9022e652  lbu         $v0, -0x19AE($at)
    ctx->pc = 0x36b534u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x61E652u));
    // 0x36b538: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36b538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36b53c: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x36b53cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x36b540: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x36b540u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x36b544: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x36b544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x36b548: 0x2442e650  addiu       $v0, $v0, -0x19B0
    ctx->pc = 0x36b548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960720));
    // 0x36b54c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36b54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36b550: 0x8c431390  lw          $v1, 0x1390($v0)
    ctx->pc = 0x36b550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5008)));
    // 0x36b554: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x36b554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x36b558: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x36b558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x36b55c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x36b55cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x36b560: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x36b560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x36b564: 0x9022e652  lbu         $v0, -0x19AE($at)
    ctx->pc = 0x36b564u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x61E652u));
    // 0x36b568: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36b568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36b56c: 0x2450000b  addiu       $s0, $v0, 0xB
    ctx->pc = 0x36b56cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 11));
    // 0x36b570: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x36B570u;
    {
        const bool branch_taken_0x36b570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36b570) {
            ctx->pc = 0x36B5A0u;
            return;
        }
    }
    ctx->pc = 0x36B578u;
}
