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

// Function: entry_0020b668
// Address: 0x20b668 - 0x20b710
void entry_0020b668_0x20b668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020b668_0x20b668");
#endif

    switch (ctx->pc) {
        case 0x20b6d0u: goto label_20b6d0;
        case 0x20b6f8u: goto label_20b6f8;
        default: break;
    }

    ctx->pc = 0x20b668u;

    // 0x20b668: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x20b668u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x20b66c: 0x9022ec68  lbu         $v0, -0x1398($at)
    ctx->pc = 0x20b66cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3EEC68u));
    // 0x20b670: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x20B670u;
    {
        const bool branch_taken_0x20b670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20b670) {
            ctx->pc = 0x20B710u;
            return;
        }
    }
    ctx->pc = 0x20B678u;
    // 0x20b678: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20b678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20b67c: 0x8c2294e0  lw          $v0, -0x6B20($at)
    ctx->pc = 0x20b67cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6194E0u));
    // 0x20b680: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x20B680u;
    {
        const bool branch_taken_0x20b680 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20b680) {
            ctx->pc = 0x20B710u;
            return;
        }
    }
    ctx->pc = 0x20B688u;
    // 0x20b688: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x20b688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x20b68c: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x20b68cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x20b690: 0x3c060062  lui         $a2, 0x62
    ctx->pc = 0x20b690u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
    // 0x20b694: 0x24c293e0  addiu       $v0, $a2, -0x6C20
    ctx->pc = 0x20b694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939616));
    // 0x20b698: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x20b698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x20b69c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x20b69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20b6a0: 0x30450002  andi        $a1, $v0, 0x2
    ctx->pc = 0x20b6a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x20b6a4: 0x10a0001a  beqz        $a1, . + 4 + (0x1A << 2)
    ctx->pc = 0x20B6A4u;
    {
        const bool branch_taken_0x20b6a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b6a4) {
            ctx->pc = 0x20B710u;
            return;
        }
    }
    ctx->pc = 0x20B6ACu;
    // 0x20b6ac: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x20b6acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x20b6b0: 0x24518c70  addiu       $s1, $v0, -0x7390
    ctx->pc = 0x20b6b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937712));
    // 0x20b6b4: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x20b6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b6b8: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x20b6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x20b6bc: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x20b6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x20b6c0: 0x24450100  addiu       $a1, $v0, 0x100
    ctx->pc = 0x20b6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x20b6c4: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x20b6c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x20b6c8: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x20B6C8u;
    SET_GPR_U32(ctx, 31, 0x20B6D0u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x20B6D0u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x20B6D0u) { return; }
    ctx->pc = 0x20B6D0u;
label_20b6d0:
    // 0x20b6d0: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x20b6d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x20b6d4: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x20b6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x20b6d8: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x20b6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x20b6dc: 0x246292c0  addiu       $v0, $v1, -0x6D40
    ctx->pc = 0x20b6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939328));
    // 0x20b6e0: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x20b6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x20b6e4: 0x8fa40188  lw          $a0, 0x188($sp)
    ctx->pc = 0x20b6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b6e8: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x20b6e8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x20b6ec: 0x27a60150  addiu       $a2, $sp, 0x150
    ctx->pc = 0x20b6ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x20b6f0: 0xc06c8e0  jal         func_1B2380
    ctx->pc = 0x20B6F0u;
    SET_GPR_U32(ctx, 31, 0x20B6F8u);
    ctx->pc = 0x1B2380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2380u, 0x20B6F0u, 0x20B6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B6F8u;
label_20b6f8:
    // 0x20b6f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20B6F8u;
    {
        const bool branch_taken_0x20b6f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b6f8) {
            ctx->pc = 0x20B710u;
            return;
        }
    }
    ctx->pc = 0x20B700u;
    // 0x20b700: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20b700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20b704: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20b704u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20b708: 0xac2594e0  sw          $a1, -0x6B20($at)
    ctx->pc = 0x20b708u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x6194E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6194E0u, _value); } while (0);
    // 0x20b70c: 0x0  nop
    ctx->pc = 0x20b70cu;
    // NOP
    ctx->pc = 0x20b710u;
}
