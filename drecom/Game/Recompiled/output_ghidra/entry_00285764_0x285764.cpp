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

// Function: entry_00285764
// Address: 0x285764 - 0x285894
void entry_00285764_0x285764(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00285764_0x285764");
#endif

    switch (ctx->pc) {
        case 0x28577cu: goto label_28577c;
        case 0x2857acu: goto label_2857ac;
        case 0x285808u: goto label_285808;
        default: break;
    }

    ctx->pc = 0x285764u;

    // 0x285764: 0x8e23685c  lw          $v1, 0x685C($s1)
    ctx->pc = 0x285764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26716)));
    // 0x285768: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x285768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x28576c: 0x10600049  beqz        $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x28576Cu;
    {
        const bool branch_taken_0x28576c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28576c) {
            ctx->pc = 0x285894u;
            return;
        }
    }
    ctx->pc = 0x285774u;
    // 0x285774: 0xc0762d8  jal         func_1D8B60
    ctx->pc = 0x285774u;
    SET_GPR_U32(ctx, 31, 0x28577Cu);
    ctx->pc = 0x1D8B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8B60u, 0x285774u, 0x28577Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28577Cu;
label_28577c:
    // 0x28577c: 0x14400045  bnez        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x28577Cu;
    {
        const bool branch_taken_0x28577c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28577c) {
            ctx->pc = 0x285894u;
            return;
        }
    }
    ctx->pc = 0x285784u;
    // 0x285784: 0x8e23685c  lw          $v1, 0x685C($s1)
    ctx->pc = 0x285784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26716)));
    // 0x285788: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x285788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x28578c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x28578cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x285790: 0xae22685c  sw          $v0, 0x685C($s1)
    ctx->pc = 0x285790u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 26716), GPR_U32(ctx, 2));
    // 0x285794: 0x26300520  addiu       $s0, $s1, 0x520
    ctx->pc = 0x285794u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1312));
    // 0x285798: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x285798u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x28579c: 0x8e2265a0  lw          $v0, 0x65A0($s1)
    ctx->pc = 0x28579cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26016)));
    // 0x2857a0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2857a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2857a4: 0xc076530  jal         func_1D94C0
    ctx->pc = 0x2857A4u;
    SET_GPR_U32(ctx, 31, 0x2857ACu);
    ctx->pc = 0x1D94C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D94C0u, 0x2857A4u, 0x2857ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2857ACu;
label_2857ac:
    // 0x2857ac: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x2857acu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2857b0: 0x8e2265a0  lw          $v0, 0x65A0($s1)
    ctx->pc = 0x2857b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26016)));
    // 0x2857b4: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2857b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2857b8: 0xae2265a0  sw          $v0, 0x65A0($s1)
    ctx->pc = 0x2857b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 26016), GPR_U32(ctx, 2));
    // 0x2857bc: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x2857bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2857c0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2857c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2857c4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2857c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2857c8: 0x9602fffc  lhu         $v0, -0x4($s0)
    ctx->pc = 0x2857c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4294967292)));
    // 0x2857cc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2857ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2857d0: 0x24420400  addiu       $v0, $v0, 0x400
    ctx->pc = 0x2857d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x2857d4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2857d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2857d8: 0xa6020004  sh          $v0, 0x4($s0)
    ctx->pc = 0x2857d8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x2857dc: 0x9602fffe  lhu         $v0, -0x2($s0)
    ctx->pc = 0x2857dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4294967294)));
    // 0x2857e0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2857e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2857e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2857e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2857e8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2857e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2857ec: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x2857ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x2857f0: 0x26300120  addiu       $s0, $s1, 0x120
    ctx->pc = 0x2857f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
    // 0x2857f4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x2857f4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2857f8: 0x26250720  addiu       $a1, $s1, 0x720
    ctx->pc = 0x2857f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1824));
    // 0x2857fc: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2857fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x285800: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x285800u;
    SET_GPR_U32(ctx, 31, 0x285808u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x285808u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x285808u) { return; }
    ctx->pc = 0x285808u;
label_285808:
    // 0x285808: 0x8e2365a0  lw          $v1, 0x65A0($s1)
    ctx->pc = 0x285808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26016)));
    // 0x28580c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x28580cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x285810: 0x8e2465a0  lw          $a0, 0x65A0($s1)
    ctx->pc = 0x285810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26016)));
    // 0x285814: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x285814u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x285818: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x285818u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x28581c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x28581cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x285820: 0xae2365a0  sw          $v1, 0x65A0($s1)
    ctx->pc = 0x285820u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 26016), GPR_U32(ctx, 3));
    // 0x285824: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x285824u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x285828: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x285828u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x28582c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x28582cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x285830: 0x9603fffc  lhu         $v1, -0x4($s0)
    ctx->pc = 0x285830u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4294967292)));
    // 0x285834: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x285834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x285838: 0x24630400  addiu       $v1, $v1, 0x400
    ctx->pc = 0x285838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1024));
    // 0x28583c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x28583cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x285840: 0xa6030004  sh          $v1, 0x4($s0)
    ctx->pc = 0x285840u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x285844: 0x9603fffe  lhu         $v1, -0x2($s0)
    ctx->pc = 0x285844u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4294967294)));
    // 0x285848: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x285848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x28584c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x28584cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x285850: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x285850u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x285854: 0xa6030006  sh          $v1, 0x6($s0)
    ctx->pc = 0x285854u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x285858: 0x8e236870  lw          $v1, 0x6870($s1)
    ctx->pc = 0x285858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26736)));
    // 0x28585c: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x28585cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x285860: 0xae236870  sw          $v1, 0x6870($s1)
    ctx->pc = 0x285860u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 26736), GPR_U32(ctx, 3));
    // 0x285864: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x285864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x285868: 0xac201ba0  sw          $zero, 0x1BA0($at)
    ctx->pc = 0x285868u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x621BA0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621BA0u, _value); } while (0);
    // 0x28586c: 0x8e24685c  lw          $a0, 0x685C($s1)
    ctx->pc = 0x28586cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26716)));
    // 0x285870: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x285870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x285874: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x285874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x285878: 0xae23685c  sw          $v1, 0x685C($s1)
    ctx->pc = 0x285878u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 26716), GPR_U32(ctx, 3));
    // 0x28587c: 0x8e245dc4  lw          $a0, 0x5DC4($s1)
    ctx->pc = 0x28587cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24004)));
    // 0x285880: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x285880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x285884: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x285884u;
    {
        const bool branch_taken_0x285884 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x285884) {
            ctx->pc = 0x285894u;
            return;
        }
    }
    ctx->pc = 0x28588Cu;
    // 0x28588c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x28588cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x285890: 0xae235dd4  sw          $v1, 0x5DD4($s1)
    ctx->pc = 0x285890u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24020), GPR_U32(ctx, 3));
    ctx->pc = 0x285894u;
}
