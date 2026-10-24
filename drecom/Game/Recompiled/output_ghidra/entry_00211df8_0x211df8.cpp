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

// Function: entry_00211df8
// Address: 0x211df8 - 0x211f28
void entry_00211df8_0x211df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00211df8_0x211df8");
#endif

    switch (ctx->pc) {
        case 0x211f20u: goto label_211f20;
        default: break;
    }

    ctx->pc = 0x211df8u;

    // 0x211df8: 0x92030080  lbu         $v1, 0x80($s0)
    ctx->pc = 0x211df8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x211dfc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x211dfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x211e00: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x211e00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x211e04: 0x10600088  beqz        $v1, . + 4 + (0x88 << 2)
    ctx->pc = 0x211E04u;
    {
        const bool branch_taken_0x211e04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x211e04) {
            ctx->pc = 0x212028u;
            return;
        }
    }
    ctx->pc = 0x211E0Cu;
    // 0x211e0c: 0x92030083  lbu         $v1, 0x83($s0)
    ctx->pc = 0x211e0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 131)));
    // 0x211e10: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x211e10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x211e14: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x211e14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x211e18: 0x10600083  beqz        $v1, . + 4 + (0x83 << 2)
    ctx->pc = 0x211E18u;
    {
        const bool branch_taken_0x211e18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x211e18) {
            ctx->pc = 0x212028u;
            return;
        }
    }
    ctx->pc = 0x211E20u;
    // 0x211e20: 0x92030081  lbu         $v1, 0x81($s0)
    ctx->pc = 0x211e20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 129)));
    // 0x211e24: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x211e24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x211e28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x211e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x211e2c: 0x1483007e  bne         $a0, $v1, . + 4 + (0x7E << 2)
    ctx->pc = 0x211E2Cu;
    {
        const bool branch_taken_0x211e2c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x211e2c) {
            ctx->pc = 0x212028u;
            return;
        }
    }
    ctx->pc = 0x211E34u;
    // 0x211e34: 0x9203008b  lbu         $v1, 0x8B($s0)
    ctx->pc = 0x211e34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 139)));
    // 0x211e38: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x211e38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x211e3c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x211e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x211e40: 0x10830039  beq         $a0, $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x211E40u;
    {
        const bool branch_taken_0x211e40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x211e40) {
            ctx->pc = 0x211F28u;
            return;
        }
    }
    ctx->pc = 0x211E48u;
    // 0x211e48: 0x9203008b  lbu         $v1, 0x8B($s0)
    ctx->pc = 0x211e48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 139)));
    // 0x211e4c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x211e4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x211e50: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x211e50u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x211e54: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x211e54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x211e58: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x211e58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x211e5c: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x211e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x211e60: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x211e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x211e64: 0x9203008b  lbu         $v1, 0x8B($s0)
    ctx->pc = 0x211e64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 139)));
    // 0x211e68: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x211e68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x211e6c: 0x3064001f  andi        $a0, $v1, 0x1F
    ctx->pc = 0x211e6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x211e70: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x211e70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x211e74: 0x832006  srlv        $a0, $v1, $a0
    ctx->pc = 0x211e74u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x211e78: 0x8ca31a64  lw          $v1, 0x1A64($a1)
    ctx->pc = 0x211e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 6756)));
    // 0x211e7c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x211e7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x211e80: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x211E80u;
    {
        const bool branch_taken_0x211e80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x211e80) {
            ctx->pc = 0x211F28u;
            return;
        }
    }
    ctx->pc = 0x211E88u;
    // 0x211e88: 0xa2000080  sb          $zero, 0x80($s0)
    ctx->pc = 0x211e88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 128), (uint8_t)GPR_U32(ctx, 0));
    // 0x211e8c: 0x9203008c  lbu         $v1, 0x8C($s0)
    ctx->pc = 0x211e8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x211e90: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x211e90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x211e94: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x211e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x211e98: 0x10830063  beq         $a0, $v1, . + 4 + (0x63 << 2)
    ctx->pc = 0x211E98u;
    {
        const bool branch_taken_0x211e98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x211e98) {
            ctx->pc = 0x212028u;
            return;
        }
    }
    ctx->pc = 0x211EA0u;
    // 0x211ea0: 0x9203008c  lbu         $v1, 0x8C($s0)
    ctx->pc = 0x211ea0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x211ea4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x211ea4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x211ea8: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x211ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x211eac: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x211eacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x211eb0: 0x2463e650  addiu       $v1, $v1, -0x19B0
    ctx->pc = 0x211eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960720));
    // 0x211eb4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x211eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x211eb8: 0x8c631390  lw          $v1, 0x1390($v1)
    ctx->pc = 0x211eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5008)));
    // 0x211ebc: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x211ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x211ec0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x211ec0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x211ec4: 0x10600058  beqz        $v1, . + 4 + (0x58 << 2)
    ctx->pc = 0x211EC4u;
    {
        const bool branch_taken_0x211ec4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x211ec4) {
            ctx->pc = 0x212028u;
            return;
        }
    }
    ctx->pc = 0x211ECCu;
    // 0x211ecc: 0x9202008c  lbu         $v0, 0x8C($s0)
    ctx->pc = 0x211eccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x211ed0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x211ed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x211ed4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x211ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x211ed8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x211ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x211edc: 0x2442e650  addiu       $v0, $v0, -0x19B0
    ctx->pc = 0x211edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960720));
    // 0x211ee0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x211ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x211ee4: 0x8c441390  lw          $a0, 0x1390($v0)
    ctx->pc = 0x211ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5008)));
    // 0x211ee8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x211ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x211eec: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x211eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x211ef0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x211ef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x211ef4: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x211ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x211ef8: 0x9202008c  lbu         $v0, 0x8C($s0)
    ctx->pc = 0x211ef8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x211efc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x211efcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x211f00: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x211f00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x211f04: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x211f04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x211f08: 0x2442e650  addiu       $v0, $v0, -0x19B0
    ctx->pc = 0x211f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960720));
    // 0x211f0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x211f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x211f10: 0x8c441390  lw          $a0, 0x1390($v0)
    ctx->pc = 0x211f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5008)));
    // 0x211f14: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x211f14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x211f18: 0xc0d85c4  jal         func_361710
    ctx->pc = 0x211F18u;
    SET_GPR_U32(ctx, 31, 0x211F20u);
    ctx->pc = 0x361710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x361710u, 0x211F18u, 0x211F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211F20u;
label_211f20:
    // 0x211f20: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x211F20u;
    {
        const bool branch_taken_0x211f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x211f20) {
            ctx->pc = 0x212028u;
            return;
        }
    }
    ctx->pc = 0x211F28u;
}
