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

// Function: entry_0019c75c
// Address: 0x19c75c - 0x19c818
void entry_0019c75c_0x19c75c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c75c_0x19c75c");
#endif

    switch (ctx->pc) {
        case 0x19c7f8u: goto label_19c7f8;
        default: break;
    }

    ctx->pc = 0x19c75cu;

    // 0x19c75c: 0x92030080  lbu         $v1, 0x80($s0)
    ctx->pc = 0x19c75cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x19c760: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x19c760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x19c764: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x19c764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x19c768: 0x1060009f  beqz        $v1, . + 4 + (0x9F << 2)
    ctx->pc = 0x19C768u;
    {
        const bool branch_taken_0x19c768 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c768) {
            ctx->pc = 0x19C9E8u;
            return;
        }
    }
    ctx->pc = 0x19C770u;
    // 0x19c770: 0x92030083  lbu         $v1, 0x83($s0)
    ctx->pc = 0x19c770u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 131)));
    // 0x19c774: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x19c774u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x19c778: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x19c778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x19c77c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x19c77cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x19c780: 0x10600099  beqz        $v1, . + 4 + (0x99 << 2)
    ctx->pc = 0x19C780u;
    {
        const bool branch_taken_0x19c780 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c780) {
            ctx->pc = 0x19C9E8u;
            return;
        }
    }
    ctx->pc = 0x19C788u;
    // 0x19c788: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19c788u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19c78c: 0xac30d388  sw          $s0, -0x2C78($at)
    ctx->pc = 0x19c78cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x5CD388u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CD388u, _value); } while (0);
    // 0x19c790: 0x92030081  lbu         $v1, 0x81($s0)
    ctx->pc = 0x19c790u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 129)));
    // 0x19c794: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x19c794u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x19c798: 0x92030083  lbu         $v1, 0x83($s0)
    ctx->pc = 0x19c798u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 131)));
    // 0x19c79c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x19c79cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x19c7a0: 0x30630050  andi        $v1, $v1, 0x50
    ctx->pc = 0x19c7a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)80);
    // 0x19c7a4: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x19C7A4u;
    {
        const bool branch_taken_0x19c7a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c7a4) {
            ctx->pc = 0x19C818u;
            return;
        }
    }
    ctx->pc = 0x19C7ACu;
    // 0x19c7ac: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19c7acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19c7b0: 0x8c241a3c  lw          $a0, 0x1A3C($at)
    ctx->pc = 0x19c7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x19c7b4: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x19c7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x19c7b8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x19c7b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x19c7bc: 0x1460008a  bnez        $v1, . + 4 + (0x8A << 2)
    ctx->pc = 0x19C7BCu;
    {
        const bool branch_taken_0x19c7bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19c7bc) {
            ctx->pc = 0x19C9E8u;
            return;
        }
    }
    ctx->pc = 0x19C7C4u;
    // 0x19c7c4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19c7c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19c7c8: 0x8c241a3c  lw          $a0, 0x1A3C($at)
    ctx->pc = 0x19c7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x19c7cc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x19c7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x19c7d0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x19c7d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x19c7d4: 0x14600084  bnez        $v1, . + 4 + (0x84 << 2)
    ctx->pc = 0x19C7D4u;
    {
        const bool branch_taken_0x19c7d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19c7d4) {
            ctx->pc = 0x19C9E8u;
            return;
        }
    }
    ctx->pc = 0x19C7DCu;
    // 0x19c7dc: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x19c7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x19c7e0: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x19c7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x19c7e4: 0x244274d0  addiu       $v0, $v0, 0x74D0
    ctx->pc = 0x19c7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29904));
    // 0x19c7e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19c7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19c7ec: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x19c7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19c7f0: 0xc055574  jal         func_1555D0
    ctx->pc = 0x19C7F0u;
    SET_GPR_U32(ctx, 31, 0x19C7F8u);
    ctx->pc = 0x1555D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1555D0u, 0x19C7F0u, 0x19C7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C7F8u;
label_19c7f8:
    // 0x19c7f8: 0x1040007b  beqz        $v0, . + 4 + (0x7B << 2)
    ctx->pc = 0x19C7F8u;
    {
        const bool branch_taken_0x19c7f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c7f8) {
            ctx->pc = 0x19C9E8u;
            return;
        }
    }
    ctx->pc = 0x19C800u;
    // 0x19c800: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19c800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19c804: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x19c804u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x19c808: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x19c808u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x19c80c: 0x14600076  bnez        $v1, . + 4 + (0x76 << 2)
    ctx->pc = 0x19C80Cu;
    {
        const bool branch_taken_0x19c80c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19c80c) {
            ctx->pc = 0x19C9E8u;
            return;
        }
    }
    ctx->pc = 0x19C814u;
    // 0x19c814: 0x0  nop
    ctx->pc = 0x19c814u;
    // NOP
    ctx->pc = 0x19c818u;
}
