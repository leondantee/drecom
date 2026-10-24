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

// Function: Sce_scene_init_after
// Address: 0x211dd0 - 0x212058
void Sce_scene_init_after_0x211dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Sce_scene_init_after_0x211dd0");
#endif

    switch (ctx->pc) {
        case 0x211df8u: goto label_211df8;
        case 0x211f20u: goto label_211f20;
        case 0x211fdcu: goto label_211fdc;
        case 0x212020u: goto label_212020;
        default: break;
    }

    ctx->pc = 0x211dd0u;

    // 0x211dd0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x211dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x211dd4: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x211dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x211dd8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x211dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x211ddc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x211ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x211de0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x211de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x211de4: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x211de4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x211de8: 0x2470d390  addiu       $s0, $v1, -0x2C70
    ctx->pc = 0x211de8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955920));
    // 0x211dec: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x211decu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x211df0: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x211DF0u;
    {
        const bool branch_taken_0x211df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x211df0) {
            ctx->pc = 0x212030u;
            goto label_212030;
        }
    }
    ctx->pc = 0x211DF8u;
label_211df8:
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
            goto label_212028;
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
            goto label_212028;
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
            goto label_212028;
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
            goto label_211f28;
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
            goto label_211f28;
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
            goto label_212028;
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
            goto label_212028;
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
            goto label_212028;
        }
    }
    ctx->pc = 0x211F28u;
label_211f28:
    // 0x211f28: 0x9203008d  lbu         $v1, 0x8D($s0)
    ctx->pc = 0x211f28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 141)));
    // 0x211f2c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x211f2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x211f30: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x211f30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x211f34: 0x1060003c  beqz        $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x211F34u;
    {
        const bool branch_taken_0x211f34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x211f34) {
            ctx->pc = 0x212028u;
            goto label_212028;
        }
    }
    ctx->pc = 0x211F3Cu;
    // 0x211f3c: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x211f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x211f40: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x211f40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x211f44: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x211f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x211f48: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x211f48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x211f4c: 0xc6000098  lwc1        $f0, 0x98($s0)
    ctx->pc = 0x211f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x211f50: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x211f50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x211f54: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x211f54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x211f58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x211f58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x211f5c: 0x0  nop
    ctx->pc = 0x211f5cu;
    // NOP
    // 0x211f60: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x211f60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x211f64: 0x9202008c  lbu         $v0, 0x8C($s0)
    ctx->pc = 0x211f64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x211f68: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x211f68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x211f6c: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x211f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x211f70: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x211F70u;
    {
        const bool branch_taken_0x211f70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x211f70) {
            ctx->pc = 0x211FB0u;
            goto label_211fb0;
        }
    }
    ctx->pc = 0x211F78u;
    // 0x211f78: 0x9202008c  lbu         $v0, 0x8C($s0)
    ctx->pc = 0x211f78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x211f7c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x211f7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x211f80: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x211f80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x211f84: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x211f84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x211f88: 0x2442e650  addiu       $v0, $v0, -0x19B0
    ctx->pc = 0x211f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960720));
    // 0x211f8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x211f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x211f90: 0x8c511390  lw          $s1, 0x1390($v0)
    ctx->pc = 0x211f90u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5008)));
    // 0x211f94: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x211f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x211f98: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x211f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x211f9c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x211F9Cu;
    {
        const bool branch_taken_0x211f9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x211f9c) {
            ctx->pc = 0x211FB8u;
            goto label_211fb8;
        }
    }
    ctx->pc = 0x211FA4u;
    // 0x211fa4: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x211fa4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x211fa8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x211FA8u;
    {
        const bool branch_taken_0x211fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x211fa8) {
            ctx->pc = 0x211FB8u;
            goto label_211fb8;
        }
    }
    ctx->pc = 0x211FB0u;
label_211fb0:
    // 0x211fb0: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x211fb0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x211fb4: 0x0  nop
    ctx->pc = 0x211fb4u;
    // NOP
label_211fb8:
    // 0x211fb8: 0x1620000b  bnez        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x211FB8u;
    {
        const bool branch_taken_0x211fb8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x211fb8) {
            ctx->pc = 0x211FE8u;
            goto label_211fe8;
        }
    }
    ctx->pc = 0x211FC0u;
    // 0x211fc0: 0x2404001d  addiu       $a0, $zero, 0x1D
    ctx->pc = 0x211fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x211fc4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x211fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x211fc8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x211fc8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x211fcc: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x211fccu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x211fd0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x211fd0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x211fd4: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x211FD4u;
    SET_GPR_U32(ctx, 31, 0x211FDCu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x211FD4u, 0x211FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211FDCu;
label_211fdc:
    // 0x211fdc: 0xae02009c  sw          $v0, 0x9C($s0)
    ctx->pc = 0x211fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 2));
    // 0x211fe0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x211FE0u;
    {
        const bool branch_taken_0x211fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x211fe0) {
            ctx->pc = 0x212028u;
            goto label_212028;
        }
    }
    ctx->pc = 0x211FE8u;
label_211fe8:
    // 0x211fe8: 0x11183c  dsll32      $v1, $s1, 0
    ctx->pc = 0x211fe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
    // 0x211fec: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x211fecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x211ff0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x211ff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x211ff4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x211ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x211ff8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x211ff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x211ffc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x211ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x212000: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x212000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x212004: 0x3444001d  ori         $a0, $v0, 0x1D
    ctx->pc = 0x212004u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29);
    // 0x212008: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x212008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x21200c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x21200cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x212010: 0x8e270130  lw          $a3, 0x130($s1)
    ctx->pc = 0x212010u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x212014: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x212014u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x212018: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x212018u;
    SET_GPR_U32(ctx, 31, 0x212020u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x212018u, 0x212020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212020u;
label_212020:
    // 0x212020: 0xae02009c  sw          $v0, 0x9C($s0)
    ctx->pc = 0x212020u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 2));
    // 0x212024: 0x0  nop
    ctx->pc = 0x212024u;
    // NOP
label_212028:
    // 0x212028: 0x261000a0  addiu       $s0, $s0, 0xA0
    ctx->pc = 0x212028u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x21202c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x21202cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_212030:
    // 0x212030: 0x2e430040  sltiu       $v1, $s2, 0x40
    ctx->pc = 0x212030u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x212034: 0x1460ff70  bnez        $v1, . + 4 + (-0x90 << 2)
    ctx->pc = 0x212034u;
    {
        const bool branch_taken_0x212034 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x212034) {
            ctx->pc = 0x211DF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_211df8;
        }
    }
    ctx->pc = 0x21203Cu;
    // 0x21203c: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x21203cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x212040: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x212040u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x212044: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x212044u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212048: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x212048u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21204c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x21204cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x212050: 0x3e00008  jr          $ra
    ctx->pc = 0x212050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212050u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x212058u;
}
