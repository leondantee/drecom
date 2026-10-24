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

// Function: entry_0032791c
// Address: 0x32791c - 0x327a2c
void entry_0032791c_0x32791c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032791c_0x32791c");
#endif

    switch (ctx->pc) {
        case 0x32797cu: goto label_32797c;
        case 0x3279c0u: goto label_3279c0;
        default: break;
    }

    ctx->pc = 0x32791cu;

    // 0x32791c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x32791cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327920: 0x90830346  lbu         $v1, 0x346($a0)
    ctx->pc = 0x327920u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 838)));
    // 0x327924: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x327924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x327928: 0xa0830346  sb          $v1, 0x346($a0)
    ctx->pc = 0x327928u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 838), (uint8_t)GPR_U32(ctx, 3));
    // 0x32792c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x32792cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327930: 0x90830348  lbu         $v1, 0x348($a0)
    ctx->pc = 0x327930u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 840)));
    // 0x327934: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x327934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x327938: 0xa0830348  sb          $v1, 0x348($a0)
    ctx->pc = 0x327938u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 840), (uint8_t)GPR_U32(ctx, 3));
    // 0x32793c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x32793cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327940: 0x90620348  lbu         $v0, 0x348($v1)
    ctx->pc = 0x327940u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x327944: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x327944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x327948: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x327948u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x32794c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x32794cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x327950: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x327950u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x327954: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x327954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327958: 0xa043034b  sb          $v1, 0x34B($v0)
    ctx->pc = 0x327958u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 843), (uint8_t)GPR_U32(ctx, 3));
    // 0x32795c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x32795cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327960: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x327960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327964: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x327964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327968: 0x248402f0  addiu       $a0, $a0, 0x2F0
    ctx->pc = 0x327968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 752));
    // 0x32796c: 0x246502f0  addiu       $a1, $v1, 0x2F0
    ctx->pc = 0x32796cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 752));
    // 0x327970: 0x24460300  addiu       $a2, $v0, 0x300
    ctx->pc = 0x327970u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x327974: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x327974u;
    SET_GPR_U32(ctx, 31, 0x32797Cu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x327974u, 0x32797Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32797Cu;
label_32797c:
    // 0x32797c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x32797cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327980: 0x90420346  lbu         $v0, 0x346($v0)
    ctx->pc = 0x327980u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 838)));
    // 0x327984: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x327984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x327988: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x327988u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x32798c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x32798cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327990: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x327990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x327994: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x327994u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327998: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x327998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x32799c: 0x90420346  lbu         $v0, 0x346($v0)
    ctx->pc = 0x32799cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 838)));
    // 0x3279a0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3279a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3279a4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3279a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3279a8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x3279a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3279ac: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x3279acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3279b0: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x3279b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3279b4: 0x24a502f0  addiu       $a1, $a1, 0x2F0
    ctx->pc = 0x3279b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 752));
    // 0x3279b8: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x3279B8u;
    SET_GPR_U32(ctx, 31, 0x3279C0u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x3279B8u, 0x3279C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3279C0u;
label_3279c0:
    // 0x3279c0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x3279c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3279c4: 0x90630346  lbu         $v1, 0x346($v1)
    ctx->pc = 0x3279c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 838)));
    // 0x3279c8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3279c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3279cc: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x3279ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3279d0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x3279d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3279d4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3279d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3279d8: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x3279d8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3279dc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x3279dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3279e0: 0x90630346  lbu         $v1, 0x346($v1)
    ctx->pc = 0x3279e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 838)));
    // 0x3279e4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3279e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3279e8: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x3279e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3279ec: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x3279ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3279f0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3279f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3279f4: 0x24630480  addiu       $v1, $v1, 0x480
    ctx->pc = 0x3279f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x3279f8: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x3279f8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x3279fc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x3279fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327a00: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x327a00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x327a04: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x327a04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x327a08: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x327a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327a0c: 0x90630347  lbu         $v1, 0x347($v1)
    ctx->pc = 0x327a0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 839)));
    // 0x327a10: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x327a10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x327a14: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x327a14u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x327a18: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x327A18u;
    {
        const bool branch_taken_0x327a18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x327a18) {
            ctx->pc = 0x327A2Cu;
            return;
        }
    }
    ctx->pc = 0x327A20u;
    // 0x327a20: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x327a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x327a24: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x327a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327a28: 0xa0640abc  sb          $a0, 0xABC($v1)
    ctx->pc = 0x327a28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2748), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x327a2cu;
}
