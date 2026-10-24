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

// Function: Em07_R1_hit_tail_f
// Address: 0x2d6970 - 0x2d6a6c
void Em07_R1_hit_tail_f_0x2d6970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em07_R1_hit_tail_f_0x2d6970");
#endif

    switch (ctx->pc) {
        case 0x2d69c4u: goto label_2d69c4;
        case 0x2d6a00u: goto label_2d6a00;
        default: break;
    }

    ctx->pc = 0x2d6970u;

    // 0x2d6970: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d6970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d6974: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2d6974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2d6978: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2d6978u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2d697c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d697cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d6980: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2d6980u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d6984: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2d6984u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d6988: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d6988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d698c: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2D698Cu;
    {
        const bool branch_taken_0x2d698c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d698c) {
            ctx->pc = 0x2D69D4u;
            goto label_2d69d4;
        }
    }
    ctx->pc = 0x2D6994u;
    // 0x2d6994: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D6994u;
    {
        const bool branch_taken_0x2d6994 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d6994) {
            ctx->pc = 0x2D69A4u;
            goto label_2d69a4;
        }
    }
    ctx->pc = 0x2D699Cu;
    // 0x2d699c: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x2D699Cu;
    {
        const bool branch_taken_0x2d699c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d699c) {
            ctx->pc = 0x2D6A5Cu;
            goto label_2d6a5c;
        }
    }
    ctx->pc = 0x2D69A4u;
label_2d69a4:
    // 0x2d69a4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d69a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d69a8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d69a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d69ac: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2d69acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2d69b0: 0x24063c07  addiu       $a2, $zero, 0x3C07
    ctx->pc = 0x2d69b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15367));
    // 0x2d69b4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d69b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d69b8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2d69b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d69bc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2D69BCu;
    SET_GPR_U32(ctx, 31, 0x2D69C4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2D69BCu, 0x2D69C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D69C4u;
label_2d69c4:
    // 0x2d69c4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d69c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d69c8: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2d69c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d69cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d69ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d69d0: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2d69d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2d69d4:
    // 0x2d69d4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d69d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d69d8: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x2d69d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x2d69dc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d69dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d69e0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2d69e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2d69e4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D69E4u;
    {
        const bool branch_taken_0x2d69e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d69e4) {
            ctx->pc = 0x2D69F4u;
            goto label_2d69f4;
        }
    }
    ctx->pc = 0x2D69ECu;
    // 0x2d69ec: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2d69ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2d69f0: 0xa020ec68  sb          $zero, -0x1398($at)
    ctx->pc = 0x2d69f0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EEC68u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3EEC68u, _value); } while (0);
label_2d69f4:
    // 0x2d69f4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d69f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d69f8: 0xc0b5fa0  jal         func_2D7E80
    ctx->pc = 0x2D69F8u;
    SET_GPR_U32(ctx, 31, 0x2D6A00u);
    ctx->pc = 0x2D7E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7E80u, 0x2D69F8u, 0x2D6A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6A00u;
label_2d6a00:
    // 0x2d6a00: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d6a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d6a04: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2d6a04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2d6a08: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2D6A08u;
    {
        const bool branch_taken_0x2d6a08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d6a08) {
            ctx->pc = 0x2D6A5Cu;
            goto label_2d6a5c;
        }
    }
    ctx->pc = 0x2D6A10u;
    // 0x2d6a10: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d6a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d6a14: 0x2463134c  addiu       $v1, $v1, 0x134C
    ctx->pc = 0x2d6a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
    // 0x2d6a18: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2d6a18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d6a1c: 0x8ca41334  lw          $a0, 0x1334($a1)
    ctx->pc = 0x2d6a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4916)));
    // 0x2d6a20: 0x2403ff05  addiu       $v1, $zero, -0xFB
    ctx->pc = 0x2d6a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967045));
    // 0x2d6a24: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2d6a24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2d6a28: 0xaca31334  sw          $v1, 0x1334($a1)
    ctx->pc = 0x2d6a28u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4916), GPR_U32(ctx, 3));
    // 0x2d6a2c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d6a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d6a30: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d6a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d6a34: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d6a34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d6a38: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2d6a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d6a3c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d6a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d6a40: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d6a40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d6a44: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d6a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d6a48: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d6a48u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d6a4c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d6a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d6a50: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d6a50u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d6a54: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d6a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d6a58: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d6a58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2d6a5c:
    // 0x2d6a5c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2d6a5cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d6a60: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2d6a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d6a64: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6A64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6A64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6A6Cu;
}
