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

// Function: Plw01_move06
// Address: 0x1bd750 - 0x1be7bc
void Plw01_move06_0x1bd750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Plw01_move06_0x1bd750");
#endif

    switch (ctx->pc) {
        case 0x1bd81cu: goto label_1bd81c;
        case 0x1bd840u: goto label_1bd840;
        case 0x1bd854u: goto label_1bd854;
        case 0x1bd858u: goto label_1bd858;
        case 0x1bd92cu: goto label_1bd92c;
        case 0x1bd948u: goto label_1bd948;
        case 0x1bd958u: goto label_1bd958;
        case 0x1bd96cu: goto label_1bd96c;
        case 0x1bd9a4u: goto label_1bd9a4;
        case 0x1bd9f0u: goto label_1bd9f0;
        case 0x1bd9f4u: goto label_1bd9f4;
        case 0x1bda68u: goto label_1bda68;
        case 0x1bda8cu: goto label_1bda8c;
        case 0x1bdaa8u: goto label_1bdaa8;
        case 0x1bdabcu: goto label_1bdabc;
        case 0x1bdac8u: goto label_1bdac8;
        case 0x1bdb1cu: goto label_1bdb1c;
        case 0x1bdbc8u: goto label_1bdbc8;
        case 0x1bdbecu: goto label_1bdbec;
        case 0x1bdc38u: goto label_1bdc38;
        case 0x1bdc9cu: goto label_1bdc9c;
        case 0x1bdcc0u: goto label_1bdcc0;
        case 0x1bdcdcu: goto label_1bdcdc;
        case 0x1bdcf0u: goto label_1bdcf0;
        case 0x1bdd00u: goto label_1bdd00;
        case 0x1bdd7cu: goto label_1bdd7c;
        case 0x1bdda8u: goto label_1bdda8;
        case 0x1bde2cu: goto label_1bde2c;
        case 0x1bde44u: goto label_1bde44;
        case 0x1bdec8u: goto label_1bdec8;
        case 0x1bdf1cu: goto label_1bdf1c;
        case 0x1bdf78u: goto label_1bdf78;
        case 0x1bdfb0u: goto label_1bdfb0;
        case 0x1bdfc0u: goto label_1bdfc0;
        case 0x1bdfd4u: goto label_1bdfd4;
        case 0x1bdff0u: goto label_1bdff0;
        case 0x1be064u: goto label_1be064;
        case 0x1be098u: goto label_1be098;
        case 0x1be11cu: goto label_1be11c;
        case 0x1be170u: goto label_1be170;
        case 0x1be1b4u: goto label_1be1b4;
        case 0x1be1dcu: goto label_1be1dc;
        case 0x1be1f0u: goto label_1be1f0;
        case 0x1be20cu: goto label_1be20c;
        case 0x1be224u: goto label_1be224;
        case 0x1be298u: goto label_1be298;
        case 0x1be2c8u: goto label_1be2c8;
        case 0x1be348u: goto label_1be348;
        case 0x1be374u: goto label_1be374;
        case 0x1be3a4u: goto label_1be3a4;
        case 0x1be41cu: goto label_1be41c;
        case 0x1be460u: goto label_1be460;
        case 0x1be470u: goto label_1be470;
        case 0x1be47cu: goto label_1be47c;
        case 0x1be490u: goto label_1be490;
        case 0x1be49cu: goto label_1be49c;
        case 0x1be4b4u: goto label_1be4b4;
        case 0x1be508u: goto label_1be508;
        case 0x1be524u: goto label_1be524;
        case 0x1be578u: goto label_1be578;
        case 0x1be5a4u: goto label_1be5a4;
        case 0x1be704u: goto label_1be704;
        case 0x1be738u: goto label_1be738;
        case 0x1be798u: goto label_1be798;
        default: break;
    }

    ctx->pc = 0x1bd750u;

    // 0x1bd750: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1bd750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1bd754: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x1bd754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x1bd758: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1bd758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1bd75c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1bd75cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1bd760: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bd760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bd764: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bd764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bd768: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x1bd768u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
    // 0x1bd76c: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x1bd76cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x1bd770: 0x24900080  addiu       $s0, $a0, 0x80
    ctx->pc = 0x1bd770u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x1bd774: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1bd774u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x1bd778: 0x2473ec70  addiu       $s3, $v1, -0x1390
    ctx->pc = 0x1bd778u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962288));
    // 0x1bd77c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1bd77cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bd780: 0x8ca60008  lw          $a2, 0x8($a1)
    ctx->pc = 0x1bd780u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1bd784: 0x3c0497ff  lui         $a0, 0x97FF
    ctx->pc = 0x1bd784u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38911 << 16));
    // 0x1bd788: 0x3487ffff  ori         $a3, $a0, 0xFFFF
    ctx->pc = 0x1bd788u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1bd78c: 0xc71824  and         $v1, $a2, $a3
    ctx->pc = 0x1bd78cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
    // 0x1bd790: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1bd790u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1bd794: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bd794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bd798: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bd798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bd79c: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x1bd79cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1bd7a0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bd7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bd7a4: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1bd7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1bd7a8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BD7A8u;
    {
        const bool branch_taken_0x1bd7a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd7a8) {
            ctx->pc = 0x1BD7BCu;
            goto label_1bd7bc;
        }
    }
    ctx->pc = 0x1BD7B0u;
    // 0x1bd7b0: 0x8e0319e4  lw          $v1, 0x19E4($s0)
    ctx->pc = 0x1bd7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6628)));
    // 0x1bd7b4: 0x34630400  ori         $v1, $v1, 0x400
    ctx->pc = 0x1bd7b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
    // 0x1bd7b8: 0xae0319e4  sw          $v1, 0x19E4($s0)
    ctx->pc = 0x1bd7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6628), GPR_U32(ctx, 3));
label_1bd7bc:
    // 0x1bd7bc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bd7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bd7c0: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x1bd7c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1bd7c4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1bd7c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1bd7c8: 0x2c81000a  sltiu       $at, $a0, 0xA
    ctx->pc = 0x1bd7c8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1bd7cc: 0x102003cf  beqz        $at, . + 4 + (0x3CF << 2)
    ctx->pc = 0x1BD7CCu;
    {
        const bool branch_taken_0x1bd7cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd7cc) {
            ctx->pc = 0x1BE70Cu;
            goto label_1be70c;
        }
    }
    ctx->pc = 0x1BD7D4u;
    // 0x1bd7d4: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x1bd7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x1bd7d8: 0x2463f3c0  addiu       $v1, $v1, -0xC40
    ctx->pc = 0x1bd7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964160));
    // 0x1bd7dc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1bd7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1bd7e0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1bd7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1bd7e4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1bd7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bd7e8: 0x600008  jr          $v1
    ctx->pc = 0x1BD7E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BD7F0u: goto label_1bd7f0;
            case 0x1BD980u: goto label_1bd980;
            case 0x1BDAF0u: goto label_1bdaf0;
            case 0x1BDB68u: goto label_1bdb68;
            case 0x1BDEFCu: goto label_1bdefc;
            case 0x1BDF4Cu: goto label_1bdf4c;
            case 0x1BE14Cu: goto label_1be14c;
            case 0x1BE188u: goto label_1be188;
            case 0x1BE350u: goto label_1be350;
            case 0x1BE434u: goto label_1be434;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BD7E8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1BD7F0u;
label_1bd7f0:
    // 0x1bd7f0: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1bd7f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1bd7f4: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1bd7f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bd7f8: 0xa0a610a8  sb          $a2, 0x10A8($a1)
    ctx->pc = 0x1bd7f8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4264), (uint8_t)GPR_U32(ctx, 6));
    // 0x1bd7fc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bd7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bd800: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bd800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bd804: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1bd804u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x1bd808: 0x24060595  addiu       $a2, $zero, 0x595
    ctx->pc = 0x1bd808u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1429));
    // 0x1bd80c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1bd80cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bd810: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1bd810u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1bd814: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1BD814u;
    SET_GPR_U32(ctx, 31, 0x1BD81Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1BD814u, 0x1BD81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD81Cu;
label_1bd81c:
    // 0x1bd81c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1bd81cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1bd820: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bd820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bd824: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1bd824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1bd828: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BD828u;
    {
        const bool branch_taken_0x1bd828 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bd828) {
            ctx->pc = 0x1BD840u;
            goto label_1bd840;
        }
    }
    ctx->pc = 0x1BD830u;
    // 0x1bd830: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bd830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bd834: 0xac6013f0  sw          $zero, 0x13F0($v1)
    ctx->pc = 0x1bd834u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5104), GPR_U32(ctx, 0));
    // 0x1bd838: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1BD838u;
    {
        const bool branch_taken_0x1bd838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd838) {
            ctx->pc = 0x1BD858u;
            goto label_1bd858;
        }
    }
    ctx->pc = 0x1BD840u;
label_1bd840:
    // 0x1bd840: 0x3c030600  lui         $v1, 0x600
    ctx->pc = 0x1bd840u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1536 << 16));
    // 0x1bd844: 0x3464ff80  ori         $a0, $v1, 0xFF80
    ctx->pc = 0x1bd844u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65408);
    // 0x1bd848: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x1bd848u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    // 0x1bd84c: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x1BD84Cu;
    SET_GPR_U32(ctx, 31, 0x1BD854u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x1BD84Cu, 0x1BD854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD854u;
label_1bd854:
    // 0x1bd854: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1bd854u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1bd858:
    // 0x1bd858: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bd858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bd85c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bd85cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bd860: 0xac831b6c  sw          $v1, 0x1B6C($a0)
    ctx->pc = 0x1bd860u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7020), GPR_U32(ctx, 3));
    // 0x1bd864: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bd864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bd868: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x1bd868u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1bd86c: 0x3c060020  lui         $a2, 0x20
    ctx->pc = 0x1bd86cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32 << 16));
    // 0x1bd870: 0xa63824  and         $a3, $a1, $a2
    ctx->pc = 0x1bd870u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x1bd874: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BD874u;
    {
        const bool branch_taken_0x1bd874 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd874) {
            ctx->pc = 0x1BD884u;
            goto label_1bd884;
        }
    }
    ctx->pc = 0x1BD87Cu;
    // 0x1bd87c: 0x8fa80068  lw          $t0, 0x68($sp)
    ctx->pc = 0x1bd87cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bd880: 0xad001b6c  sw          $zero, 0x1B6C($t0)
    ctx->pc = 0x1bd880u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7020), GPR_U32(ctx, 0));
label_1bd884:
    // 0x1bd884: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bd884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bd888: 0x908313a6  lbu         $v1, 0x13A6($a0)
    ctx->pc = 0x1bd888u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5030)));
    // 0x1bd88c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1bd88cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1bd890: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1bd890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bd894: 0x10830018  beq         $a0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1BD894u;
    {
        const bool branch_taken_0x1bd894 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bd894) {
            ctx->pc = 0x1BD8F8u;
            goto label_1bd8f8;
        }
    }
    ctx->pc = 0x1BD89Cu;
    // 0x1bd89c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bd89cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bd8a0: 0x10830015  beq         $a0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1BD8A0u;
    {
        const bool branch_taken_0x1bd8a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bd8a0) {
            ctx->pc = 0x1BD8F8u;
            goto label_1bd8f8;
        }
    }
    ctx->pc = 0x1BD8A8u;
    // 0x1bd8a8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1bd8a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bd8ac: 0x10850005  beq         $a0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BD8ACu;
    {
        const bool branch_taken_0x1bd8ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x1bd8ac) {
            ctx->pc = 0x1BD8C4u;
            goto label_1bd8c4;
        }
    }
    ctx->pc = 0x1BD8B4u;
    // 0x1bd8b4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BD8B4u;
    {
        const bool branch_taken_0x1bd8b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd8b4) {
            ctx->pc = 0x1BD8C4u;
            goto label_1bd8c4;
        }
    }
    ctx->pc = 0x1BD8BCu;
    // 0x1bd8bc: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1BD8BCu;
    {
        const bool branch_taken_0x1bd8bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd8bc) {
            ctx->pc = 0x1BD930u;
            goto label_1bd930;
        }
    }
    ctx->pc = 0x1BD8C4u;
label_1bd8c4:
    // 0x1bd8c4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bd8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bd8c8: 0x908313a4  lbu         $v1, 0x13A4($a0)
    ctx->pc = 0x1bd8c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5028)));
    // 0x1bd8cc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1bd8ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1bd8d0: 0x28630003  slti        $v1, $v1, 0x3
    ctx->pc = 0x1bd8d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1bd8d4: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1BD8D4u;
    {
        const bool branch_taken_0x1bd8d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bd8d4) {
            ctx->pc = 0x1BD930u;
            goto label_1bd930;
        }
    }
    ctx->pc = 0x1BD8DCu;
    // 0x1bd8dc: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1bd8dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bd8e0: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1bd8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1bd8e4: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x1bd8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x1bd8e8: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1bd8e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1bd8ec: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1bd8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1bd8f0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1BD8F0u;
    {
        const bool branch_taken_0x1bd8f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd8f0) {
            ctx->pc = 0x1BD930u;
            goto label_1bd930;
        }
    }
    ctx->pc = 0x1BD8F8u;
label_1bd8f8:
    // 0x1bd8f8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bd8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bd8fc: 0x906313a5  lbu         $v1, 0x13A5($v1)
    ctx->pc = 0x1bd8fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5029)));
    // 0x1bd900: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1bd900u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1bd904: 0x28830003  slti        $v1, $a0, 0x3
    ctx->pc = 0x1bd904u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1bd908: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BD908u;
    {
        const bool branch_taken_0x1bd908 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bd908) {
            ctx->pc = 0x1BD930u;
            goto label_1bd930;
        }
    }
    ctx->pc = 0x1BD910u;
    // 0x1bd910: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1bd910u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bd914: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1bd914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1bd918: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x1bd918u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x1bd91c: 0x642825  or          $a1, $v1, $a0
    ctx->pc = 0x1bd91cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1bd920: 0xacc50008  sw          $a1, 0x8($a2)
    ctx->pc = 0x1bd920u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 5));
    // 0x1bd924: 0xc0c51c4  jal         func_314710
    ctx->pc = 0x1BD924u;
    SET_GPR_U32(ctx, 31, 0x1BD92Cu);
    ctx->pc = 0x314710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314710u, 0x1BD924u, 0x1BD92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD92Cu;
label_1bd92c:
    // 0x1bd92c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1bd92cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1bd930:
    // 0x1bd930: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bd930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bd934: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1bd934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bd938: 0xc48c137c  lwc1        $f12, 0x137C($a0)
    ctx->pc = 0x1bd938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bd93c: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x1bd93cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1bd940: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1BD940u;
    SET_GPR_U32(ctx, 31, 0x1BD948u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1BD940u, 0x1BD948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD948u;
label_1bd948:
    // 0x1bd948: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1bd948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1bd94c: 0xc7ac0054  lwc1        $f12, 0x54($sp)
    ctx->pc = 0x1bd94cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bd950: 0xc05733c  jal         func_15CCF0
    ctx->pc = 0x1BD950u;
    SET_GPR_U32(ctx, 31, 0x1BD958u);
    ctx->pc = 0x15CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CCF0u, 0x1BD950u, 0x1BD958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD958u;
label_1bd958:
    // 0x1bd958: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1bd958u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1bd95c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bd95cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bd960: 0x24640180  addiu       $a0, $v1, 0x180
    ctx->pc = 0x1bd960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x1bd964: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x1BD964u;
    SET_GPR_U32(ctx, 31, 0x1BD96Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x1BD964u, 0x1BD96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD96Cu;
label_1bd96c:
    // 0x1bd96c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1bd96cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1bd970: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bd970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bd974: 0x90850003  lbu         $a1, 0x3($a0)
    ctx->pc = 0x1bd974u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x1bd978: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x1bd978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1bd97c: 0xa0830003  sb          $v1, 0x3($a0)
    ctx->pc = 0x1bd97cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 3));
label_1bd980:
    // 0x1bd980: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bd980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bd984: 0x906409da  lbu         $a0, 0x9DA($v1)
    ctx->pc = 0x1bd984u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2522)));
    // 0x1bd988: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1bd988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1bd98c: 0x3064003f  andi        $a0, $v1, 0x3F
    ctx->pc = 0x1bd98cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x1bd990: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x1bd990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1bd994: 0x14830017  bne         $a0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1BD994u;
    {
        const bool branch_taken_0x1bd994 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1bd994) {
            ctx->pc = 0x1BD9F4u;
            goto label_1bd9f4;
        }
    }
    ctx->pc = 0x1BD99Cu;
    // 0x1bd99c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1BD99Cu;
    SET_GPR_U32(ctx, 31, 0x1BD9A4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1BD99Cu, 0x1BD9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD9A4u;
label_1bd9a4:
    // 0x1bd9a4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1bd9a4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1bd9a8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1bd9a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1bd9ac: 0x30830003  andi        $v1, $a0, 0x3
    ctx->pc = 0x1bd9acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x1bd9b0: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x1bd9b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1bd9b4: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1bd9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1bd9b8: 0x246452d8  addiu       $a0, $v1, 0x52D8
    ctx->pc = 0x1bd9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 21208));
    // 0x1bd9bc: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x1bd9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1bd9c0: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x1bd9c0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bd9c4: 0x3091ffff  andi        $s1, $a0, 0xFFFF
    ctx->pc = 0x1bd9c4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1bd9c8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bd9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bd9cc: 0x8c650130  lw          $a1, 0x130($v1)
    ctx->pc = 0x1bd9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x1bd9d0: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x1bd9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
    // 0x1bd9d4: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x1bd9d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x1bd9d8: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1bd9d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bd9dc: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x1bd9dcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1bd9e0: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x1bd9e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x1bd9e4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1bd9e4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1bd9e8: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1BD9E8u;
    SET_GPR_U32(ctx, 31, 0x1BD9F0u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1BD9E8u, 0x1BD9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD9F0u;
label_1bd9f0:
    // 0x1bd9f0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1bd9f0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1bd9f4:
    // 0x1bd9f4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bd9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bd9f8: 0x8c631b6c  lw          $v1, 0x1B6C($v1)
    ctx->pc = 0x1bd9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7020)));
    // 0x1bd9fc: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BD9FCu;
    {
        const bool branch_taken_0x1bd9fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd9fc) {
            ctx->pc = 0x1BDA20u;
            goto label_1bda20;
        }
    }
    ctx->pc = 0x1BDA04u;
    // 0x1bda04: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bda04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1bda08: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x1bda08u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1bda0c: 0x3c03ff7f  lui         $v1, 0xFF7F
    ctx->pc = 0x1bda0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65407 << 16));
    // 0x1bda10: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1bda10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1bda14: 0x832824  and         $a1, $a0, $v1
    ctx->pc = 0x1bda14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1bda18: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bda18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1bda1c: 0xac251a98  sw          $a1, 0x1A98($at)
    ctx->pc = 0x1bda1cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
label_1bda20:
    // 0x1bda20: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bda20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bda24: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x1bda24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1bda28: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BDA28u;
    {
        const bool branch_taken_0x1bda28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bda28) {
            ctx->pc = 0x1BDA44u;
            goto label_1bda44;
        }
    }
    ctx->pc = 0x1BDA30u;
    // 0x1bda30: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bda30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bda34: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1bda34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1bda38: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x1bda38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x1bda3c: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1bda3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1bda40: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1bda40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_1bda44:
    // 0x1bda44: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bda44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1bda48: 0x8c251a64  lw          $a1, 0x1A64($at)
    ctx->pc = 0x1bda48u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x1bda4c: 0x34a30100  ori         $v1, $a1, 0x100
    ctx->pc = 0x1bda4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)256);
    // 0x1bda50: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bda50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1bda54: 0xac231a64  sw          $v1, 0x1A64($at)
    ctx->pc = 0x1bda54u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A64u, _value); } while (0);
    // 0x1bda58: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bda58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bda5c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1bda5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1bda60: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1BDA60u;
    SET_GPR_U32(ctx, 31, 0x1BDA68u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1BDA60u, 0x1BDA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDA68u;
label_1bda68:
    // 0x1bda68: 0x3c063e49  lui         $a2, 0x3E49
    ctx->pc = 0x1bda68u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15945 << 16));
    // 0x1bda6c: 0x34c50fdb  ori         $a1, $a2, 0xFDB
    ctx->pc = 0x1bda6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4059);
    // 0x1bda70: 0x44857000  mtc1        $a1, $f14
    ctx->pc = 0x1bda70u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1bda74: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x1bda74u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bda78: 0x8fa80068  lw          $t0, 0x68($sp)
    ctx->pc = 0x1bda78u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bda7c: 0xc4ec1290  lwc1        $f12, 0x1290($a3)
    ctx->pc = 0x1bda7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bda80: 0xc50d00d4  lwc1        $f13, 0xD4($t0)
    ctx->pc = 0x1bda80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1bda84: 0xc058f50  jal         func_163D40
    ctx->pc = 0x1BDA84u;
    SET_GPR_U32(ctx, 31, 0x1BDA8Cu);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x1BDA84u, 0x1BDA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDA8Cu;
label_1bda8c:
    // 0x1bda8c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1bda8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bda90: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1bda90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1bda94: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bda94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bda98: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bda98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bda9c: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x1bda9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bdaa0: 0xc05cd58  jal         func_173560
    ctx->pc = 0x1BDAA0u;
    SET_GPR_U32(ctx, 31, 0x1BDAA8u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x1BDAA0u, 0x1BDAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDAA8u;
label_1bdaa8:
    // 0x1bdaa8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1bdaa8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bdaac: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bdaacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bdab0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1bdab0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1bdab4: 0xc057480  jal         func_15D200
    ctx->pc = 0x1BDAB4u;
    SET_GPR_U32(ctx, 31, 0x1BDABCu);
    ctx->pc = 0x15D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D200u, 0x1BDAB4u, 0x1BDABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDABCu;
label_1bdabc:
    // 0x1bdabc: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1bdabcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1bdac0: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1BDAC0u;
    SET_GPR_U32(ctx, 31, 0x1BDAC8u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1BDAC0u, 0x1BDAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDAC8u;
label_1bdac8:
    // 0x1bdac8: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1bdac8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bdacc: 0x90a309e7  lbu         $v1, 0x9E7($a1)
    ctx->pc = 0x1bdaccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2535)));
    // 0x1bdad0: 0x1060030e  beqz        $v1, . + 4 + (0x30E << 2)
    ctx->pc = 0x1BDAD0u;
    {
        const bool branch_taken_0x1bdad0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bdad0) {
            ctx->pc = 0x1BE70Cu;
            goto label_1be70c;
        }
    }
    ctx->pc = 0x1BDAD8u;
    // 0x1bdad8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bdad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bdadc: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x1bdadcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x1bdae0: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x1bdae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1bdae4: 0xa0850003  sb          $a1, 0x3($a0)
    ctx->pc = 0x1bdae4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 5));
    // 0x1bdae8: 0x10000308  b           . + 4 + (0x308 << 2)
    ctx->pc = 0x1BDAE8u;
    {
        const bool branch_taken_0x1bdae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bdae8) {
            ctx->pc = 0x1BE70Cu;
            goto label_1be70c;
        }
    }
    ctx->pc = 0x1BDAF0u;
label_1bdaf0:
    // 0x1bdaf0: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1bdaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1bdaf4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1bdaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bdaf8: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x1bdaf8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x1bdafc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bdafcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bdb00: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1bdb00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bdb04: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1bdb04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1bdb08: 0x24060096  addiu       $a2, $zero, 0x96
    ctx->pc = 0x1bdb08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x1bdb0c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1bdb0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bdb10: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1bdb10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1bdb14: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1BDB14u;
    SET_GPR_U32(ctx, 31, 0x1BDB1Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1BDB14u, 0x1BDB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDB1Cu;
label_1bdb1c:
    // 0x1bdb1c: 0x3c024322  lui         $v0, 0x4322
    ctx->pc = 0x1bdb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17186 << 16));
    // 0x1bdb20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bdb20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bdb24: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bdb24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bdb28: 0xe4601284  swc1        $f0, 0x1284($v1)
    ctx->pc = 0x1bdb28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4740), bits); }
    // 0x1bdb2c: 0x3c044101  lui         $a0, 0x4101
    ctx->pc = 0x1bdb2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16641 << 16));
    // 0x1bdb30: 0x3482999a  ori         $v0, $a0, 0x999A
    ctx->pc = 0x1bdb30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)39322);
    // 0x1bdb34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bdb34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bdb38: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1bdb38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bdb3c: 0xe4a01280  swc1        $f0, 0x1280($a1)
    ctx->pc = 0x1bdb3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4736), bits); }
    // 0x1bdb40: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1bdb40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1bdb44: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1bdb44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bdb48: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x1bdb48u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x1bdb4c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1bdb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1bdb50: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1bdb50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bdb54: 0xa443127e  sh          $v1, 0x127E($v0)
    ctx->pc = 0x1bdb54u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 3));
    // 0x1bdb58: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bdb58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bdb5c: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1bdb5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1bdb60: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1bdb60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bdb64: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1bdb64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_1bdb68:
    // 0x1bdb68: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bdb68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bdb6c: 0x8482127a  lh          $v0, 0x127A($a0)
    ctx->pc = 0x1bdb6cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4730)));
    // 0x1bdb70: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x1bdb70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1bdb74: 0xa483127a  sh          $v1, 0x127A($a0)
    ctx->pc = 0x1bdb74u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x1bdb78: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bdb78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bdb7c: 0x8464127a  lh          $a0, 0x127A($v1)
    ctx->pc = 0x1bdb7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x1bdb80: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x1bdb80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x1bdb84: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1bdb84u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1bdb88: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1BDB88u;
    {
        const bool branch_taken_0x1bdb88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bdb88) {
            ctx->pc = 0x1BDBC8u;
            goto label_1bdbc8;
        }
    }
    ctx->pc = 0x1BDB90u;
    // 0x1bdb90: 0x8e040090  lw          $a0, 0x90($s0)
    ctx->pc = 0x1bdb90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x1bdb94: 0x30820020  andi        $v0, $a0, 0x20
    ctx->pc = 0x1bdb94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
    // 0x1bdb98: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1BDB98u;
    {
        const bool branch_taken_0x1bdb98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bdb98) {
            ctx->pc = 0x1BDBC8u;
            goto label_1bdbc8;
        }
    }
    ctx->pc = 0x1BDBA0u;
    // 0x1bdba0: 0x3c044297  lui         $a0, 0x4297
    ctx->pc = 0x1bdba0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17047 << 16));
    // 0x1bdba4: 0x34833333  ori         $v1, $a0, 0x3333
    ctx->pc = 0x1bdba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13107);
    // 0x1bdba8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bdba8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bdbac: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bdbacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bdbb0: 0xe4601284  swc1        $f0, 0x1284($v1)
    ctx->pc = 0x1bdbb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4740), bits); }
    // 0x1bdbb4: 0x3c054086  lui         $a1, 0x4086
    ctx->pc = 0x1bdbb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16518 << 16));
    // 0x1bdbb8: 0x34a36666  ori         $v1, $a1, 0x6666
    ctx->pc = 0x1bdbb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26214);
    // 0x1bdbbc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bdbbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bdbc0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bdbc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bdbc4: 0xe4801280  swc1        $f0, 0x1280($a0)
    ctx->pc = 0x1bdbc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4736), bits); }
label_1bdbc8:
    // 0x1bdbc8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bdbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bdbcc: 0x906309da  lbu         $v1, 0x9DA($v1)
    ctx->pc = 0x1bdbccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2522)));
    // 0x1bdbd0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1bdbd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1bdbd4: 0x3064003f  andi        $a0, $v1, 0x3F
    ctx->pc = 0x1bdbd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x1bdbd8: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x1bdbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1bdbdc: 0x14830016  bne         $a0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1BDBDCu;
    {
        const bool branch_taken_0x1bdbdc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1bdbdc) {
            ctx->pc = 0x1BDC38u;
            goto label_1bdc38;
        }
    }
    ctx->pc = 0x1BDBE4u;
    // 0x1bdbe4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1BDBE4u;
    SET_GPR_U32(ctx, 31, 0x1BDBECu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1BDBE4u, 0x1BDBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDBECu;
label_1bdbec:
    // 0x1bdbec: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1bdbecu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1bdbf0: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1bdbf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1bdbf4: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x1bdbf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1bdbf8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1bdbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1bdbfc: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1bdbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1bdc00: 0x244452d8  addiu       $a0, $v0, 0x52D8
    ctx->pc = 0x1bdc00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 21208));
    // 0x1bdc04: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x1bdc04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1bdc08: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x1bdc08u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bdc0c: 0x30b2ffff  andi        $s2, $a1, 0xFFFF
    ctx->pc = 0x1bdc0cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1bdc10: 0x3c08469c  lui         $t0, 0x469C
    ctx->pc = 0x1bdc10u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)18076 << 16));
    // 0x1bdc14: 0x35074000  ori         $a3, $t0, 0x4000
    ctx->pc = 0x1bdc14u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)16384);
    // 0x1bdc18: 0x44876000  mtc1        $a3, $f12
    ctx->pc = 0x1bdc18u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bdc1c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1bdc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bdc20: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1bdc20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1bdc24: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x1bdc24u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1bdc28: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x1bdc28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1bdc2c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1bdc2cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1bdc30: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1BDC30u;
    SET_GPR_U32(ctx, 31, 0x1BDC38u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1BDC30u, 0x1BDC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDC38u;
label_1bdc38:
    // 0x1bdc38: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1bdc38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bdc3c: 0x8c421b6c  lw          $v0, 0x1B6C($v0)
    ctx->pc = 0x1bdc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7020)));
    // 0x1bdc40: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BDC40u;
    {
        const bool branch_taken_0x1bdc40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bdc40) {
            ctx->pc = 0x1BDC64u;
            goto label_1bdc64;
        }
    }
    ctx->pc = 0x1BDC48u;
    // 0x1bdc48: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bdc48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1bdc4c: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x1bdc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1bdc50: 0x3c02ff7f  lui         $v0, 0xFF7F
    ctx->pc = 0x1bdc50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65407 << 16));
    // 0x1bdc54: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1bdc54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1bdc58: 0x622824  and         $a1, $v1, $v0
    ctx->pc = 0x1bdc58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1bdc5c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bdc5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1bdc60: 0xac251a98  sw          $a1, 0x1A98($at)
    ctx->pc = 0x1bdc60u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
label_1bdc64:
    // 0x1bdc64: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bdc64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1bdc68: 0x8c231a64  lw          $v1, 0x1A64($at)
    ctx->pc = 0x1bdc68u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x1bdc6c: 0x34620100  ori         $v0, $v1, 0x100
    ctx->pc = 0x1bdc6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x1bdc70: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bdc70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1bdc74: 0xac221a64  sw          $v0, 0x1A64($at)
    ctx->pc = 0x1bdc74u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A64u, _value); } while (0);
    // 0x1bdc78: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bdc78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bdc7c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1bdc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1bdc80: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x1bdc80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x1bdc84: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1bdc84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1bdc88: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1bdc88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x1bdc8c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bdc8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bdc90: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1bdc90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1bdc94: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1BDC94u;
    SET_GPR_U32(ctx, 31, 0x1BDC9Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1BDC94u, 0x1BDC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDC9Cu;
label_1bdc9c:
    // 0x1bdc9c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1bdc9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bdca0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1bdca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bdca4: 0x3c033e49  lui         $v1, 0x3E49
    ctx->pc = 0x1bdca4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15945 << 16));
    // 0x1bdca8: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1bdca8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1bdcac: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x1bdcacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1bdcb0: 0xc4ac1290  lwc1        $f12, 0x1290($a1)
    ctx->pc = 0x1bdcb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bdcb4: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x1bdcb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1bdcb8: 0xc058f50  jal         func_163D40
    ctx->pc = 0x1BDCB8u;
    SET_GPR_U32(ctx, 31, 0x1BDCC0u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x1BDCB8u, 0x1BDCC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDCC0u;
label_1bdcc0:
    // 0x1bdcc0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1bdcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bdcc4: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1bdcc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1bdcc8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bdcc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bdccc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1bdcccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bdcd0: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x1bdcd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bdcd4: 0xc05cd58  jal         func_173560
    ctx->pc = 0x1BDCD4u;
    SET_GPR_U32(ctx, 31, 0x1BDCDCu);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x1BDCD4u, 0x1BDCDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDCDCu;
label_1bdcdc:
    // 0x1bdcdc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1bdcdcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bdce0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bdce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bdce4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1bdce4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1bdce8: 0xc057480  jal         func_15D200
    ctx->pc = 0x1BDCE8u;
    SET_GPR_U32(ctx, 31, 0x1BDCF0u);
    ctx->pc = 0x15D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D200u, 0x1BDCE8u, 0x1BDCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDCF0u;
label_1bdcf0:
    // 0x1bdcf0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1bdcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bdcf4: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x1bdcf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x1bdcf8: 0xc057a80  jal         func_15EA00
    ctx->pc = 0x1BDCF8u;
    SET_GPR_U32(ctx, 31, 0x1BDD00u);
    ctx->pc = 0x15EA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EA00u, 0x1BDCF8u, 0x1BDD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDD00u;
label_1bdd00:
    // 0x1bdd00: 0x3c024467  lui         $v0, 0x4467
    ctx->pc = 0x1bdd00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17511 << 16));
    // 0x1bdd04: 0x34444000  ori         $a0, $v0, 0x4000
    ctx->pc = 0x1bdd04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1bdd08: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1bdd08u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bdd0c: 0x0  nop
    ctx->pc = 0x1bdd0cu;
    // NOP
    // 0x1bdd10: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1bdd10u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1bdd14: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x1bdd14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x1bdd18: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bdd18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bdd1c: 0xc4811284  lwc1        $f1, 0x1284($a0)
    ctx->pc = 0x1bdd1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bdd20: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1bdd20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bdd24: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1bdd24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bdd28: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1bdd28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1bdd2c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1bdd2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x1bdd30: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bdd30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bdd34: 0xc4810124  lwc1        $f1, 0x124($a0)
    ctx->pc = 0x1bdd34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bdd38: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x1bdd38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bdd3c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1bdd3cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bdd40: 0x0  nop
    ctx->pc = 0x1bdd40u;
    // NOP
    // 0x1bdd44: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1BDD44u;
    {
        const bool branch_taken_0x1bdd44 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bdd44) {
            ctx->pc = 0x1BDD58u;
            goto label_1bdd58;
        }
    }
    ctx->pc = 0x1BDD4Cu;
    // 0x1bdd4c: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x1bdd4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bdd50: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1bdd50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bdd54: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1bdd54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_1bdd58:
    // 0x1bdd58: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1bdd58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bdd5c: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x1bdd5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bdd60: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bdd60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bdd64: 0xc4601284  lwc1        $f0, 0x1284($v1)
    ctx->pc = 0x1bdd64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bdd68: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1bdd68u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1bdd6c: 0xe4601284  swc1        $f0, 0x1284($v1)
    ctx->pc = 0x1bdd6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4740), bits); }
    // 0x1bdd70: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1bdd70u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1bdd74: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1BDD74u;
    SET_GPR_U32(ctx, 31, 0x1BDD7Cu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1BDD74u, 0x1BDD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDD7Cu;
label_1bdd7c:
    // 0x1bdd7c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bdd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bdd80: 0x8485127e  lh          $a1, 0x127E($a0)
    ctx->pc = 0x1bdd80u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4734)));
    // 0x1bdd84: 0x10a0002c  beqz        $a1, . + 4 + (0x2C << 2)
    ctx->pc = 0x1BDD84u;
    {
        const bool branch_taken_0x1bdd84 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bdd84) {
            ctx->pc = 0x1BDE38u;
            goto label_1bde38;
        }
    }
    ctx->pc = 0x1BDD8Cu;
    // 0x1bdd8c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bdd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bdd90: 0x8462127e  lh          $v0, 0x127E($v1)
    ctx->pc = 0x1bdd90u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4734)));
    // 0x1bdd94: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1bdd94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1bdd98: 0xa462127e  sh          $v0, 0x127E($v1)
    ctx->pc = 0x1bdd98u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4734), (uint16_t)GPR_U32(ctx, 2));
    // 0x1bdd9c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1bdd9cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1bdda0: 0xc0587a8  jal         func_161EA0
    ctx->pc = 0x1BDDA0u;
    SET_GPR_U32(ctx, 31, 0x1BDDA8u);
    ctx->pc = 0x161EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161EA0u, 0x1BDDA0u, 0x1BDDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDDA8u;
label_1bdda8:
    // 0x1bdda8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1bdda8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1bddac: 0x10800049  beqz        $a0, . + 4 + (0x49 << 2)
    ctx->pc = 0x1BDDACu;
    {
        const bool branch_taken_0x1bddac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bddac) {
            ctx->pc = 0x1BDED4u;
            goto label_1bded4;
        }
    }
    ctx->pc = 0x1BDDB4u;
    // 0x1bddb4: 0x8fb00068  lw          $s0, 0x68($sp)
    ctx->pc = 0x1bddb4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bddb8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1bddb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1bddbc: 0x3c130100  lui         $s3, 0x100
    ctx->pc = 0x1bddbcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)256 << 16));
    // 0x1bddc0: 0x732824  and         $a1, $v1, $s3
    ctx->pc = 0x1bddc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 19));
    // 0x1bddc4: 0x10a00251  beqz        $a1, . + 4 + (0x251 << 2)
    ctx->pc = 0x1BDDC4u;
    {
        const bool branch_taken_0x1bddc4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bddc4) {
            ctx->pc = 0x1BE70Cu;
            goto label_1be70c;
        }
    }
    ctx->pc = 0x1BDDCCu;
    // 0x1bddcc: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1bddccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bddd0: 0x8cc70008  lw          $a3, 0x8($a2)
    ctx->pc = 0x1bddd0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1bddd4: 0x3c03feff  lui         $v1, 0xFEFF
    ctx->pc = 0x1bddd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65279 << 16));
    // 0x1bddd8: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x1bddd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1bdddc: 0xe41824  and         $v1, $a3, $a0
    ctx->pc = 0x1bdddcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x1bdde0: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x1bdde0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x1bdde4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bdde4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bdde8: 0x908313a6  lbu         $v1, 0x13A6($a0)
    ctx->pc = 0x1bdde8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5030)));
    // 0x1bddec: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1bddecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1bddf0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1bddf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bddf4: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1BDDF4u;
    {
        const bool branch_taken_0x1bddf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bddf4) {
            ctx->pc = 0x1BDE24u;
            goto label_1bde24;
        }
    }
    ctx->pc = 0x1BDDFCu;
    // 0x1bddfc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bddfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bde00: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BDE00u;
    {
        const bool branch_taken_0x1bde00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bde00) {
            ctx->pc = 0x1BDE24u;
            goto label_1bde24;
        }
    }
    ctx->pc = 0x1BDE08u;
    // 0x1bde08: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1bde08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bde0c: 0x1083023f  beq         $a0, $v1, . + 4 + (0x23F << 2)
    ctx->pc = 0x1BDE0Cu;
    {
        const bool branch_taken_0x1bde0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bde0c) {
            ctx->pc = 0x1BE70Cu;
            goto label_1be70c;
        }
    }
    ctx->pc = 0x1BDE14u;
    // 0x1bde14: 0x1080023d  beqz        $a0, . + 4 + (0x23D << 2)
    ctx->pc = 0x1BDE14u;
    {
        const bool branch_taken_0x1bde14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bde14) {
            ctx->pc = 0x1BE70Cu;
            goto label_1be70c;
        }
    }
    ctx->pc = 0x1BDE1Cu;
    // 0x1bde1c: 0x1000023b  b           . + 4 + (0x23B << 2)
    ctx->pc = 0x1BDE1Cu;
    {
        const bool branch_taken_0x1bde1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bde1c) {
            ctx->pc = 0x1BE70Cu;
            goto label_1be70c;
        }
    }
    ctx->pc = 0x1BDE24u;
label_1bde24:
    // 0x1bde24: 0xc0c5238  jal         func_3148E0
    ctx->pc = 0x1BDE24u;
    SET_GPR_U32(ctx, 31, 0x1BDE2Cu);
    ctx->pc = 0x3148E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3148E0u, 0x1BDE24u, 0x1BDE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDE2Cu;
label_1bde2c:
    // 0x1bde2c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1bde2cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1bde30: 0x10000236  b           . + 4 + (0x236 << 2)
    ctx->pc = 0x1BDE30u;
    {
        const bool branch_taken_0x1bde30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bde30) {
            ctx->pc = 0x1BE70Cu;
            goto label_1be70c;
        }
    }
    ctx->pc = 0x1BDE38u;
label_1bde38:
    // 0x1bde38: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bde38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bde3c: 0xc0587a8  jal         func_161EA0
    ctx->pc = 0x1BDE3Cu;
    SET_GPR_U32(ctx, 31, 0x1BDE44u);
    ctx->pc = 0x161EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161EA0u, 0x1BDE3Cu, 0x1BDE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDE44u;
label_1bde44:
    // 0x1bde44: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1bde44u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1bde48: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x1BDE48u;
    {
        const bool branch_taken_0x1bde48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bde48) {
            ctx->pc = 0x1BDED4u;
            goto label_1bded4;
        }
    }
    ctx->pc = 0x1BDE50u;
    // 0x1bde50: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bde50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bde54: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1bde54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1bde58: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x1bde58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x1bde5c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1bde5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1bde60: 0x1060022a  beqz        $v1, . + 4 + (0x22A << 2)
    ctx->pc = 0x1BDE60u;
    {
        const bool branch_taken_0x1bde60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bde60) {
            ctx->pc = 0x1BE70Cu;
            goto label_1be70c;
        }
    }
    ctx->pc = 0x1BDE68u;
    // 0x1bde68: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1bde68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bde6c: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x1bde6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1bde70: 0x3c03feff  lui         $v1, 0xFEFF
    ctx->pc = 0x1bde70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65279 << 16));
    // 0x1bde74: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x1bde74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1bde78: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x1bde78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x1bde7c: 0xacc50008  sw          $a1, 0x8($a2)
    ctx->pc = 0x1bde7cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 5));
    // 0x1bde80: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1bde80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bde84: 0x90c713a6  lbu         $a3, 0x13A6($a2)
    ctx->pc = 0x1bde84u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 5030)));
    // 0x1bde88: 0x30e800ff  andi        $t0, $a3, 0xFF
    ctx->pc = 0x1bde88u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1bde8c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1bde8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bde90: 0x1103000b  beq         $t0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1BDE90u;
    {
        const bool branch_taken_0x1bde90 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bde90) {
            ctx->pc = 0x1BDEC0u;
            goto label_1bdec0;
        }
    }
    ctx->pc = 0x1BDE98u;
    // 0x1bde98: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bde98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bde9c: 0x11040008  beq         $t0, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BDE9Cu;
    {
        const bool branch_taken_0x1bde9c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 4));
        if (branch_taken_0x1bde9c) {
            ctx->pc = 0x1BDEC0u;
            goto label_1bdec0;
        }
    }
    ctx->pc = 0x1BDEA4u;
    // 0x1bdea4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1bdea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bdea8: 0x11030218  beq         $t0, $v1, . + 4 + (0x218 << 2)
    ctx->pc = 0x1BDEA8u;
    {
        const bool branch_taken_0x1bdea8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bdea8) {
            ctx->pc = 0x1BE70Cu;
            goto label_1be70c;
        }
    }
    ctx->pc = 0x1BDEB0u;
    // 0x1bdeb0: 0x11000216  beqz        $t0, . + 4 + (0x216 << 2)
    ctx->pc = 0x1BDEB0u;
    {
        const bool branch_taken_0x1bdeb0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bdeb0) {
            ctx->pc = 0x1BE70Cu;
            goto label_1be70c;
        }
    }
    ctx->pc = 0x1BDEB8u;
    // 0x1bdeb8: 0x10000214  b           . + 4 + (0x214 << 2)
    ctx->pc = 0x1BDEB8u;
    {
        const bool branch_taken_0x1bdeb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bdeb8) {
            ctx->pc = 0x1BE70Cu;
            goto label_1be70c;
        }
    }
    ctx->pc = 0x1BDEC0u;
label_1bdec0:
    // 0x1bdec0: 0xc0c5238  jal         func_3148E0
    ctx->pc = 0x1BDEC0u;
    SET_GPR_U32(ctx, 31, 0x1BDEC8u);
    ctx->pc = 0x3148E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3148E0u, 0x1BDEC0u, 0x1BDEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDEC8u;
label_1bdec8:
    // 0x1bdec8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1bdec8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1bdecc: 0x1000020f  b           . + 4 + (0x20F << 2)
    ctx->pc = 0x1BDECCu;
    {
        const bool branch_taken_0x1bdecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bdecc) {
            ctx->pc = 0x1BE70Cu;
            goto label_1be70c;
        }
    }
    ctx->pc = 0x1BDED4u;
label_1bded4:
    // 0x1bded4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bded4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bded8: 0x908309e7  lbu         $v1, 0x9E7($a0)
    ctx->pc = 0x1bded8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2535)));
    // 0x1bdedc: 0x1060020b  beqz        $v1, . + 4 + (0x20B << 2)
    ctx->pc = 0x1BDEDCu;
    {
        const bool branch_taken_0x1bdedc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bdedc) {
            ctx->pc = 0x1BE70Cu;
            goto label_1be70c;
        }
    }
    ctx->pc = 0x1BDEE4u;
    // 0x1bdee4: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1bdee4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bdee8: 0x90a30003  lbu         $v1, 0x3($a1)
    ctx->pc = 0x1bdee8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x1bdeec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1bdeecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1bdef0: 0xa0a30003  sb          $v1, 0x3($a1)
    ctx->pc = 0x1bdef0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x1bdef4: 0x10000205  b           . + 4 + (0x205 << 2)
    ctx->pc = 0x1BDEF4u;
    {
        const bool branch_taken_0x1bdef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bdef4) {
            ctx->pc = 0x1BE70Cu;
            goto label_1be70c;
        }
    }
    ctx->pc = 0x1BDEFCu;
label_1bdefc:
    // 0x1bdefc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bdefcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bdf00: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bdf00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bdf04: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1bdf04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x1bdf08: 0x24060097  addiu       $a2, $zero, 0x97
    ctx->pc = 0x1bdf08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 151));
    // 0x1bdf0c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1bdf0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bdf10: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1bdf10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1bdf14: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1BDF14u;
    SET_GPR_U32(ctx, 31, 0x1BDF1Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1BDF14u, 0x1BDF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDF1Cu;
label_1bdf1c:
    // 0x1bdf1c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1bdf1cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1bdf20: 0x3c0440a3  lui         $a0, 0x40A3
    ctx->pc = 0x1bdf20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16547 << 16));
    // 0x1bdf24: 0x34833334  ori         $v1, $a0, 0x3334
    ctx->pc = 0x1bdf24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13108);
    // 0x1bdf28: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bdf28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bdf2c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bdf2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bdf30: 0xe4601280  swc1        $f0, 0x1280($v1)
    ctx->pc = 0x1bdf30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4736), bits); }
    // 0x1bdf34: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bdf34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bdf38: 0xac601b60  sw          $zero, 0x1B60($v1)
    ctx->pc = 0x1bdf38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7008), GPR_U32(ctx, 0));
    // 0x1bdf3c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1bdf3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bdf40: 0x90a40003  lbu         $a0, 0x3($a1)
    ctx->pc = 0x1bdf40u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x1bdf44: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1bdf44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1bdf48: 0xa0a30003  sb          $v1, 0x3($a1)
    ctx->pc = 0x1bdf48u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 3));
label_1bdf4c:
    // 0x1bdf4c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bdf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bdf50: 0x8c631b6c  lw          $v1, 0x1B6C($v1)
    ctx->pc = 0x1bdf50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7020)));
    // 0x1bdf54: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BDF54u;
    {
        const bool branch_taken_0x1bdf54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bdf54) {
            ctx->pc = 0x1BDF78u;
            goto label_1bdf78;
        }
    }
    ctx->pc = 0x1BDF5Cu;
    // 0x1bdf5c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bdf5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1bdf60: 0x8c251a98  lw          $a1, 0x1A98($at)
    ctx->pc = 0x1bdf60u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1bdf64: 0x3c03ff7f  lui         $v1, 0xFF7F
    ctx->pc = 0x1bdf64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65407 << 16));
    // 0x1bdf68: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x1bdf68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1bdf6c: 0xa41824  and         $v1, $a1, $a0
    ctx->pc = 0x1bdf6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x1bdf70: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bdf70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1bdf74: 0xac231a98  sw          $v1, 0x1A98($at)
    ctx->pc = 0x1bdf74u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
label_1bdf78:
    // 0x1bdf78: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bdf78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1bdf7c: 0x8c231a64  lw          $v1, 0x1A64($at)
    ctx->pc = 0x1bdf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x1bdf80: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x1bdf80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x1bdf84: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bdf84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1bdf88: 0xac231a64  sw          $v1, 0x1A64($at)
    ctx->pc = 0x1bdf88u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A64u, _value); } while (0);
    // 0x1bdf8c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bdf8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bdf90: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1bdf90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1bdf94: 0x3c060400  lui         $a2, 0x400
    ctx->pc = 0x1bdf94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1024 << 16));
    // 0x1bdf98: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1bdf98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1bdf9c: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1bdf9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x1bdfa0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bdfa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bdfa4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1bdfa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1bdfa8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1BDFA8u;
    SET_GPR_U32(ctx, 31, 0x1BDFB0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1BDFA8u, 0x1BDFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDFB0u;
label_1bdfb0:
    // 0x1bdfb0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1bdfb0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1bdfb4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bdfb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bdfb8: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1BDFB8u;
    SET_GPR_U32(ctx, 31, 0x1BDFC0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1BDFB8u, 0x1BDFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDFC0u;
label_1bdfc0:
    // 0x1bdfc0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1bdfc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bdfc4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bdfc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bdfc8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1bdfc8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1bdfcc: 0xc057480  jal         func_15D200
    ctx->pc = 0x1BDFCCu;
    SET_GPR_U32(ctx, 31, 0x1BDFD4u);
    ctx->pc = 0x15D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D200u, 0x1BDFCCu, 0x1BDFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDFD4u;
label_1bdfd4:
    // 0x1bdfd4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1bdfd4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1bdfd8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bdfd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bdfdc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bdfdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bdfe0: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x1bdfe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x1bdfe4: 0x246512c0  addiu       $a1, $v1, 0x12C0
    ctx->pc = 0x1bdfe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4800));
    // 0x1bdfe8: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x1BDFE8u;
    SET_GPR_U32(ctx, 31, 0x1BDFF0u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x1BDFE8u, 0x1BDFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDFF0u;
label_1bdff0:
    // 0x1bdff0: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x1bdff0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1bdff4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bdff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bdff8: 0xc4611284  lwc1        $f1, 0x1284($v1)
    ctx->pc = 0x1bdff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bdffc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bdffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be000: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x1be000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1be004: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1be004u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1be008: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1be008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x1be00c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1be00cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be010: 0xc4811280  lwc1        $f1, 0x1280($a0)
    ctx->pc = 0x1be010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1be014: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1be014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be018: 0xc4601284  lwc1        $f0, 0x1284($v1)
    ctx->pc = 0x1be018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1be01c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1be01cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1be020: 0xe4601284  swc1        $f0, 0x1284($v1)
    ctx->pc = 0x1be020u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4740), bits); }
    // 0x1be024: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1be024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be028: 0xc4810124  lwc1        $f1, 0x124($a0)
    ctx->pc = 0x1be028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1be02c: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1be02cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1be030: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1be030u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1be034: 0x0  nop
    ctx->pc = 0x1be034u;
    // NOP
    // 0x1be038: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1BE038u;
    {
        const bool branch_taken_0x1be038 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1be038) {
            ctx->pc = 0x1BE058u;
            goto label_1be058;
        }
    }
    ctx->pc = 0x1BE040u;
    // 0x1be040: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1be040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1be044: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1be044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be048: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1be048u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x1be04c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1be04cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1be050: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1be050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be054: 0xac831b60  sw          $v1, 0x1B60($a0)
    ctx->pc = 0x1be054u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7008), GPR_U32(ctx, 3));
label_1be058:
    // 0x1be058: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1be058u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1be05c: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1BE05Cu;
    SET_GPR_U32(ctx, 31, 0x1BE064u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1BE05Cu, 0x1BE064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE064u;
label_1be064:
    // 0x1be064: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1be064u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1be068: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1be068u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be06c: 0x8ca31b60  lw          $v1, 0x1B60($a1)
    ctx->pc = 0x1be06cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 7008)));
    // 0x1be070: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BE070u;
    {
        const bool branch_taken_0x1be070 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be070) {
            ctx->pc = 0x1BE08Cu;
            goto label_1be08c;
        }
    }
    ctx->pc = 0x1BE078u;
    // 0x1be078: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1be078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1be07c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1be07cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be080: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1be080u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x1be084: 0x100001a1  b           . + 4 + (0x1A1 << 2)
    ctx->pc = 0x1BE084u;
    {
        const bool branch_taken_0x1be084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be084) {
            ctx->pc = 0x1BE70Cu;
            goto label_1be70c;
        }
    }
    ctx->pc = 0x1BE08Cu;
label_1be08c:
    // 0x1be08c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1be08cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1be090: 0xc0587a8  jal         func_161EA0
    ctx->pc = 0x1BE090u;
    SET_GPR_U32(ctx, 31, 0x1BE098u);
    ctx->pc = 0x161EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161EA0u, 0x1BE090u, 0x1BE098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE098u;
label_1be098:
    // 0x1be098: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x1be098u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1be09c: 0x12200021  beqz        $s1, . + 4 + (0x21 << 2)
    ctx->pc = 0x1BE09Cu;
    {
        const bool branch_taken_0x1be09c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be09c) {
            ctx->pc = 0x1BE124u;
            goto label_1be124;
        }
    }
    ctx->pc = 0x1BE0A4u;
    // 0x1be0a4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1be0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be0a8: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x1be0a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1be0ac: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x1be0acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x1be0b0: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1be0b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1be0b4: 0x10600195  beqz        $v1, . + 4 + (0x195 << 2)
    ctx->pc = 0x1BE0B4u;
    {
        const bool branch_taken_0x1be0b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be0b4) {
            ctx->pc = 0x1BE70Cu;
            goto label_1be70c;
        }
    }
    ctx->pc = 0x1BE0BCu;
    // 0x1be0bc: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1be0bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be0c0: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1be0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1be0c4: 0x3c03feff  lui         $v1, 0xFEFF
    ctx->pc = 0x1be0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65279 << 16));
    // 0x1be0c8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1be0c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1be0cc: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1be0ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1be0d0: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x1be0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x1be0d4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1be0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be0d8: 0x906313a6  lbu         $v1, 0x13A6($v1)
    ctx->pc = 0x1be0d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5030)));
    // 0x1be0dc: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x1be0dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1be0e0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1be0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1be0e4: 0x10a3000b  beq         $a1, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1BE0E4u;
    {
        const bool branch_taken_0x1be0e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1be0e4) {
            ctx->pc = 0x1BE114u;
            goto label_1be114;
        }
    }
    ctx->pc = 0x1BE0ECu;
    // 0x1be0ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1be0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1be0f0: 0x10a30008  beq         $a1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BE0F0u;
    {
        const bool branch_taken_0x1be0f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1be0f0) {
            ctx->pc = 0x1BE114u;
            goto label_1be114;
        }
    }
    ctx->pc = 0x1BE0F8u;
    // 0x1be0f8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1be0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1be0fc: 0x10a40183  beq         $a1, $a0, . + 4 + (0x183 << 2)
    ctx->pc = 0x1BE0FCu;
    {
        const bool branch_taken_0x1be0fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x1be0fc) {
            ctx->pc = 0x1BE70Cu;
            goto label_1be70c;
        }
    }
    ctx->pc = 0x1BE104u;
    // 0x1be104: 0x10a00181  beqz        $a1, . + 4 + (0x181 << 2)
    ctx->pc = 0x1BE104u;
    {
        const bool branch_taken_0x1be104 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be104) {
            ctx->pc = 0x1BE70Cu;
            goto label_1be70c;
        }
    }
    ctx->pc = 0x1BE10Cu;
    // 0x1be10c: 0x1000017f  b           . + 4 + (0x17F << 2)
    ctx->pc = 0x1BE10Cu;
    {
        const bool branch_taken_0x1be10c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be10c) {
            ctx->pc = 0x1BE70Cu;
            goto label_1be70c;
        }
    }
    ctx->pc = 0x1BE114u;
label_1be114:
    // 0x1be114: 0xc0c5238  jal         func_3148E0
    ctx->pc = 0x1BE114u;
    SET_GPR_U32(ctx, 31, 0x1BE11Cu);
    ctx->pc = 0x3148E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3148E0u, 0x1BE114u, 0x1BE11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE11Cu;
label_1be11c:
    // 0x1be11c: 0x1000017b  b           . + 4 + (0x17B << 2)
    ctx->pc = 0x1BE11Cu;
    {
        const bool branch_taken_0x1be11c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be11c) {
            ctx->pc = 0x1BE70Cu;
            goto label_1be70c;
        }
    }
    ctx->pc = 0x1BE124u;
label_1be124:
    // 0x1be124: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1be124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be128: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1be128u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1be12c: 0x10600177  beqz        $v1, . + 4 + (0x177 << 2)
    ctx->pc = 0x1BE12Cu;
    {
        const bool branch_taken_0x1be12c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be12c) {
            ctx->pc = 0x1BE70Cu;
            goto label_1be70c;
        }
    }
    ctx->pc = 0x1BE134u;
    // 0x1be134: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1be134u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be138: 0x90a30003  lbu         $v1, 0x3($a1)
    ctx->pc = 0x1be138u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x1be13c: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1be13cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1be140: 0xa0a40003  sb          $a0, 0x3($a1)
    ctx->pc = 0x1be140u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x1be144: 0x10000171  b           . + 4 + (0x171 << 2)
    ctx->pc = 0x1BE144u;
    {
        const bool branch_taken_0x1be144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be144) {
            ctx->pc = 0x1BE70Cu;
            goto label_1be70c;
        }
    }
    ctx->pc = 0x1BE14Cu;
label_1be14c:
    // 0x1be14c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1be14cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be150: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1be150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be154: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1be154u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1be158: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1be158u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1be15c: 0x24060098  addiu       $a2, $zero, 0x98
    ctx->pc = 0x1be15cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
    // 0x1be160: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1be160u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1be164: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1be164u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1be168: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1BE168u;
    SET_GPR_U32(ctx, 31, 0x1BE170u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1BE168u, 0x1BE170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE170u;
label_1be170:
    // 0x1be170: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1be170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be174: 0xac801b60  sw          $zero, 0x1B60($a0)
    ctx->pc = 0x1be174u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7008), GPR_U32(ctx, 0));
    // 0x1be178: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1be178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be17c: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1be17cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1be180: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x1be180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1be184: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1be184u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
label_1be188:
    // 0x1be188: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1be188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be18c: 0x8c421b6c  lw          $v0, 0x1B6C($v0)
    ctx->pc = 0x1be18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7020)));
    // 0x1be190: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BE190u;
    {
        const bool branch_taken_0x1be190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be190) {
            ctx->pc = 0x1BE1B4u;
            goto label_1be1b4;
        }
    }
    ctx->pc = 0x1BE198u;
    // 0x1be198: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1be198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1be19c: 0x8c251a98  lw          $a1, 0x1A98($at)
    ctx->pc = 0x1be19cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1be1a0: 0x3c04ff7f  lui         $a0, 0xFF7F
    ctx->pc = 0x1be1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65407 << 16));
    // 0x1be1a4: 0x3483ffff  ori         $v1, $a0, 0xFFFF
    ctx->pc = 0x1be1a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1be1a8: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1be1a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1be1ac: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1be1acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1be1b0: 0xac231a98  sw          $v1, 0x1A98($at)
    ctx->pc = 0x1be1b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
label_1be1b4:
    // 0x1be1b4: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1be1b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be1b8: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1be1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1be1bc: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x1be1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x1be1c0: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x1be1c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1be1c4: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x1be1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x1be1c8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1be1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be1cc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1be1ccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1be1d0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1be1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1be1d4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1BE1D4u;
    SET_GPR_U32(ctx, 31, 0x1BE1DCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1BE1D4u, 0x1BE1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE1DCu;
label_1be1dc:
    // 0x1be1dc: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1be1dcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1be1e0: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x1be1e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be1e4: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x1be1e4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x1be1e8: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1BE1E8u;
    SET_GPR_U32(ctx, 31, 0x1BE1F0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1BE1E8u, 0x1BE1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE1F0u;
label_1be1f0:
    // 0x1be1f0: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x1be1f0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1be1f4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1be1f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1be1f8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1be1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be1fc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1be1fcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1be200: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1be200u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1be204: 0xc057480  jal         func_15D200
    ctx->pc = 0x1BE204u;
    SET_GPR_U32(ctx, 31, 0x1BE20Cu);
    ctx->pc = 0x15D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D200u, 0x1BE204u, 0x1BE20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE20Cu;
label_1be20c:
    // 0x1be20c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1be20cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be210: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1be210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be214: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x1be214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1be218: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x1be218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x1be21c: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x1BE21Cu;
    SET_GPR_U32(ctx, 31, 0x1BE224u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x1BE21Cu, 0x1BE224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE224u;
label_1be224:
    // 0x1be224: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x1be224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1be228: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1be228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be22c: 0xc4611284  lwc1        $f1, 0x1284($v1)
    ctx->pc = 0x1be22cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1be230: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1be230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be234: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1be234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1be238: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1be238u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1be23c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1be23cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x1be240: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1be240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be244: 0xc4611280  lwc1        $f1, 0x1280($v1)
    ctx->pc = 0x1be244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1be248: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1be248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be24c: 0xc4401284  lwc1        $f0, 0x1284($v0)
    ctx->pc = 0x1be24cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1be250: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1be250u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1be254: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x1be254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    // 0x1be258: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1be258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be25c: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x1be25cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1be260: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1be260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1be264: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1be264u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1be268: 0x0  nop
    ctx->pc = 0x1be268u;
    // NOP
    // 0x1be26c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1BE26Cu;
    {
        const bool branch_taken_0x1be26c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1be26c) {
            ctx->pc = 0x1BE28Cu;
            goto label_1be28c;
        }
    }
    ctx->pc = 0x1BE274u;
    // 0x1be274: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1be274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1be278: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1be278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be27c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1be27cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x1be280: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1be280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1be284: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1be284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be288: 0xac821b60  sw          $v0, 0x1B60($a0)
    ctx->pc = 0x1be288u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7008), GPR_U32(ctx, 2));
label_1be28c:
    // 0x1be28c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1be28cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1be290: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1BE290u;
    SET_GPR_U32(ctx, 31, 0x1BE298u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1BE290u, 0x1BE298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE298u;
label_1be298:
    // 0x1be298: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1be298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be29c: 0x8c631b60  lw          $v1, 0x1B60($v1)
    ctx->pc = 0x1be29cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7008)));
    // 0x1be2a0: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BE2A0u;
    {
        const bool branch_taken_0x1be2a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be2a0) {
            ctx->pc = 0x1BE2BCu;
            goto label_1be2bc;
        }
    }
    ctx->pc = 0x1BE2A8u;
    // 0x1be2a8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1be2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1be2ac: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1be2acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be2b0: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1be2b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x1be2b4: 0x10000115  b           . + 4 + (0x115 << 2)
    ctx->pc = 0x1BE2B4u;
    {
        const bool branch_taken_0x1be2b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be2b4) {
            ctx->pc = 0x1BE70Cu;
            goto label_1be70c;
        }
    }
    ctx->pc = 0x1BE2BCu;
label_1be2bc:
    // 0x1be2bc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1be2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1be2c0: 0xc0587a8  jal         func_161EA0
    ctx->pc = 0x1BE2C0u;
    SET_GPR_U32(ctx, 31, 0x1BE2C8u);
    ctx->pc = 0x161EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161EA0u, 0x1BE2C0u, 0x1BE2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE2C8u;
label_1be2c8:
    // 0x1be2c8: 0x10400110  beqz        $v0, . + 4 + (0x110 << 2)
    ctx->pc = 0x1BE2C8u;
    {
        const bool branch_taken_0x1be2c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be2c8) {
            ctx->pc = 0x1BE70Cu;
            goto label_1be70c;
        }
    }
    ctx->pc = 0x1BE2D0u;
    // 0x1be2d0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1be2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be2d4: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1be2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1be2d8: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x1be2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x1be2dc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1be2dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1be2e0: 0x1060010a  beqz        $v1, . + 4 + (0x10A << 2)
    ctx->pc = 0x1BE2E0u;
    {
        const bool branch_taken_0x1be2e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be2e0) {
            ctx->pc = 0x1BE70Cu;
            goto label_1be70c;
        }
    }
    ctx->pc = 0x1BE2E8u;
    // 0x1be2e8: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1be2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be2ec: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1be2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1be2f0: 0x3c03feff  lui         $v1, 0xFEFF
    ctx->pc = 0x1be2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65279 << 16));
    // 0x1be2f4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1be2f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1be2f8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1be2f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1be2fc: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1be2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1be300: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1be300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be304: 0x908313a6  lbu         $v1, 0x13A6($a0)
    ctx->pc = 0x1be304u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5030)));
    // 0x1be308: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1be308u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1be30c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1be30cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1be310: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1BE310u;
    {
        const bool branch_taken_0x1be310 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1be310) {
            ctx->pc = 0x1BE340u;
            goto label_1be340;
        }
    }
    ctx->pc = 0x1BE318u;
    // 0x1be318: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1be318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1be31c: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BE31Cu;
    {
        const bool branch_taken_0x1be31c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1be31c) {
            ctx->pc = 0x1BE340u;
            goto label_1be340;
        }
    }
    ctx->pc = 0x1BE324u;
    // 0x1be324: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1be324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1be328: 0x108300f8  beq         $a0, $v1, . + 4 + (0xF8 << 2)
    ctx->pc = 0x1BE328u;
    {
        const bool branch_taken_0x1be328 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1be328) {
            ctx->pc = 0x1BE70Cu;
            goto label_1be70c;
        }
    }
    ctx->pc = 0x1BE330u;
    // 0x1be330: 0x108000f6  beqz        $a0, . + 4 + (0xF6 << 2)
    ctx->pc = 0x1BE330u;
    {
        const bool branch_taken_0x1be330 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be330) {
            ctx->pc = 0x1BE70Cu;
            goto label_1be70c;
        }
    }
    ctx->pc = 0x1BE338u;
    // 0x1be338: 0x100000f4  b           . + 4 + (0xF4 << 2)
    ctx->pc = 0x1BE338u;
    {
        const bool branch_taken_0x1be338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be338) {
            ctx->pc = 0x1BE70Cu;
            goto label_1be70c;
        }
    }
    ctx->pc = 0x1BE340u;
label_1be340:
    // 0x1be340: 0xc0c5238  jal         func_3148E0
    ctx->pc = 0x1BE340u;
    SET_GPR_U32(ctx, 31, 0x1BE348u);
    ctx->pc = 0x3148E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3148E0u, 0x1BE340u, 0x1BE348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE348u;
label_1be348:
    // 0x1be348: 0x100000f0  b           . + 4 + (0xF0 << 2)
    ctx->pc = 0x1BE348u;
    {
        const bool branch_taken_0x1be348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be348) {
            ctx->pc = 0x1BE70Cu;
            goto label_1be70c;
        }
    }
    ctx->pc = 0x1BE350u;
label_1be350:
    // 0x1be350: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1be350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be354: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1be354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be358: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1be358u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1be35c: 0x24120099  addiu       $s2, $zero, 0x99
    ctx->pc = 0x1be35cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
    // 0x1be360: 0x72403628  paddub      $a2, $s2, $zero
    ctx->pc = 0x1be360u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1be364: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1be364u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1be368: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1be368u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1be36c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1BE36Cu;
    SET_GPR_U32(ctx, 31, 0x1BE374u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1BE36Cu, 0x1BE374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE374u;
label_1be374:
    // 0x1be374: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1be374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be378: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x1be378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1be37c: 0x3c02c332  lui         $v0, 0xC332
    ctx->pc = 0x1be37cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49970 << 16));
    // 0x1be380: 0x34458000  ori         $a1, $v0, 0x8000
    ctx->pc = 0x1be380u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1be384: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1be384u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1be388: 0x0  nop
    ctx->pc = 0x1be388u;
    // NOP
    // 0x1be38c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1be38cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1be390: 0x0  nop
    ctx->pc = 0x1be390u;
    // NOP
    // 0x1be394: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1BE394u;
    {
        const bool branch_taken_0x1be394 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1be394) {
            ctx->pc = 0x1BE3A4u;
            goto label_1be3a4;
        }
    }
    ctx->pc = 0x1BE39Cu;
    // 0x1be39c: 0xc05772c  jal         func_15DCB0
    ctx->pc = 0x1BE39Cu;
    SET_GPR_U32(ctx, 31, 0x1BE3A4u);
    ctx->pc = 0x15DCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15DCB0u, 0x1BE39Cu, 0x1BE3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE3A4u;
label_1be3a4:
    // 0x1be3a4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1be3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be3a8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1be3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1be3ac: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x1be3acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x1be3b0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1be3b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1be3b4: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1BE3B4u;
    {
        const bool branch_taken_0x1be3b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be3b4) {
            ctx->pc = 0x1BE41Cu;
            goto label_1be41c;
        }
    }
    ctx->pc = 0x1BE3BCu;
    // 0x1be3bc: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1be3bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be3c0: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1be3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1be3c4: 0x3c04feff  lui         $a0, 0xFEFF
    ctx->pc = 0x1be3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65279 << 16));
    // 0x1be3c8: 0x3482ffff  ori         $v0, $a0, 0xFFFF
    ctx->pc = 0x1be3c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1be3cc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1be3ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1be3d0: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1be3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1be3d4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1be3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be3d8: 0x904213a6  lbu         $v0, 0x13A6($v0)
    ctx->pc = 0x1be3d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5030)));
    // 0x1be3dc: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x1be3dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1be3e0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1be3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1be3e4: 0x1085000b  beq         $a0, $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x1BE3E4u;
    {
        const bool branch_taken_0x1be3e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x1be3e4) {
            ctx->pc = 0x1BE414u;
            goto label_1be414;
        }
    }
    ctx->pc = 0x1BE3ECu;
    // 0x1be3ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1be3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1be3f0: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BE3F0u;
    {
        const bool branch_taken_0x1be3f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1be3f0) {
            ctx->pc = 0x1BE414u;
            goto label_1be414;
        }
    }
    ctx->pc = 0x1BE3F8u;
    // 0x1be3f8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1be3f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1be3fc: 0x10850007  beq         $a0, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BE3FCu;
    {
        const bool branch_taken_0x1be3fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x1be3fc) {
            ctx->pc = 0x1BE41Cu;
            goto label_1be41c;
        }
    }
    ctx->pc = 0x1BE404u;
    // 0x1be404: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BE404u;
    {
        const bool branch_taken_0x1be404 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be404) {
            ctx->pc = 0x1BE41Cu;
            goto label_1be41c;
        }
    }
    ctx->pc = 0x1BE40Cu;
    // 0x1be40c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1BE40Cu;
    {
        const bool branch_taken_0x1be40c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be40c) {
            ctx->pc = 0x1BE41Cu;
            goto label_1be41c;
        }
    }
    ctx->pc = 0x1BE414u;
label_1be414:
    // 0x1be414: 0xc0c5238  jal         func_3148E0
    ctx->pc = 0x1BE414u;
    SET_GPR_U32(ctx, 31, 0x1BE41Cu);
    ctx->pc = 0x3148E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3148E0u, 0x1BE414u, 0x1BE41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE41Cu;
label_1be41c:
    // 0x1be41c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1be41cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be420: 0xac601b60  sw          $zero, 0x1B60($v1)
    ctx->pc = 0x1be420u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7008), GPR_U32(ctx, 0));
    // 0x1be424: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1be424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be428: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1be428u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1be42c: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x1be42cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1be430: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1be430u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
label_1be434:
    // 0x1be434: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1be434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be438: 0x8c421b6c  lw          $v0, 0x1B6C($v0)
    ctx->pc = 0x1be438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7020)));
    // 0x1be43c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BE43Cu;
    {
        const bool branch_taken_0x1be43c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be43c) {
            ctx->pc = 0x1BE460u;
            goto label_1be460;
        }
    }
    ctx->pc = 0x1BE444u;
    // 0x1be444: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1be444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1be448: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x1be448u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1be44c: 0x3c02ff7f  lui         $v0, 0xFF7F
    ctx->pc = 0x1be44cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65407 << 16));
    // 0x1be450: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1be450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1be454: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x1be454u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1be458: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1be458u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1be45c: 0xac241a98  sw          $a0, 0x1A98($at)
    ctx->pc = 0x1be45cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
label_1be460:
    // 0x1be460: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1be460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be464: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1be464u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1be468: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1BE468u;
    SET_GPR_U32(ctx, 31, 0x1BE470u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1BE468u, 0x1BE470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE470u;
label_1be470:
    // 0x1be470: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1be470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be474: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1BE474u;
    SET_GPR_U32(ctx, 31, 0x1BE47Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1BE474u, 0x1BE47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE47Cu;
label_1be47c:
    // 0x1be47c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1be47cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1be480: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1be480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be484: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1be484u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1be488: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1BE488u;
    SET_GPR_U32(ctx, 31, 0x1BE490u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1BE488u, 0x1BE490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE490u;
label_1be490:
    // 0x1be490: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1be490u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1be494: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1BE494u;
    SET_GPR_U32(ctx, 31, 0x1BE49Cu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1BE494u, 0x1BE49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE49Cu;
label_1be49c:
    // 0x1be49c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1be49cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be4a0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1be4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be4a4: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x1be4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1be4a8: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x1be4a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x1be4ac: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x1BE4ACu;
    SET_GPR_U32(ctx, 31, 0x1BE4B4u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x1BE4ACu, 0x1BE4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE4B4u;
label_1be4b4:
    // 0x1be4b4: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x1be4b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1be4b8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1be4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be4bc: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x1be4bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1be4c0: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x1be4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x1be4c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1be4c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1be4c8: 0x0  nop
    ctx->pc = 0x1be4c8u;
    // NOP
    // 0x1be4cc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1be4ccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1be4d0: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1be4d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1be4d4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1be4d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1be4d8: 0x0  nop
    ctx->pc = 0x1be4d8u;
    // NOP
    // 0x1be4dc: 0x45000021  bc1f        . + 4 + (0x21 << 2)
    ctx->pc = 0x1BE4DCu;
    {
        const bool branch_taken_0x1be4dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1be4dc) {
            ctx->pc = 0x1BE564u;
            goto label_1be564;
        }
    }
    ctx->pc = 0x1BE4E4u;
    // 0x1be4e4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1be4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be4e8: 0x8fb00068  lw          $s0, 0x68($sp)
    ctx->pc = 0x1be4e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be4ec: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1be4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be4f0: 0x24931b40  addiu       $s3, $a0, 0x1B40
    ctx->pc = 0x1be4f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 6976));
    // 0x1be4f4: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x1be4f4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1be4f8: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x1be4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x1be4fc: 0x24660170  addiu       $a2, $v1, 0x170
    ctx->pc = 0x1be4fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 368));
    // 0x1be500: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1BE500u;
    SET_GPR_U32(ctx, 31, 0x1BE508u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1BE500u, 0x1BE508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE508u;
label_1be508:
    // 0x1be508: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x1be508u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1be50c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1be50cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be510: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1be510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be514: 0xc48c1b40  lwc1        $f12, 0x1B40($a0)
    ctx->pc = 0x1be514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1be518: 0xc46d1b48  lwc1        $f13, 0x1B48($v1)
    ctx->pc = 0x1be518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6984)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1be51c: 0xc0455e6  jal         func_115798
    ctx->pc = 0x1BE51Cu;
    SET_GPR_U32(ctx, 31, 0x1BE524u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x1BE51Cu, 0x1BE524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE524u;
label_1be524:
    // 0x1be524: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1be524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be528: 0xe4601290  swc1        $f0, 0x1290($v1)
    ctx->pc = 0x1be528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4752), bits); }
    // 0x1be52c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1be52cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1be530: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1be530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be534: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1be534u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1be538: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x1be538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x1be53c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1be53cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be540: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1be540u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1be544: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1be544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be548: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1be548u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1be54c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1be54cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be550: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1be550u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1be554: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1be554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be558: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1be558u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1be55c: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x1BE55Cu;
    {
        const bool branch_taken_0x1be55c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be55c) {
            ctx->pc = 0x1BE70Cu;
            goto label_1be70c;
        }
    }
    ctx->pc = 0x1BE564u;
label_1be564:
    // 0x1be564: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1be564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be568: 0x248312c0  addiu       $v1, $a0, 0x12C0
    ctx->pc = 0x1be568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4800));
    // 0x1be56c: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x1be56cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1be570: 0xc057b54  jal         func_15ED50
    ctx->pc = 0x1BE570u;
    SET_GPR_U32(ctx, 31, 0x1BE578u);
    ctx->pc = 0x15ED50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15ED50u, 0x1BE570u, 0x1BE578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE578u;
label_1be578:
    // 0x1be578: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1be578u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1be57c: 0x14600063  bnez        $v1, . + 4 + (0x63 << 2)
    ctx->pc = 0x1BE57Cu;
    {
        const bool branch_taken_0x1be57c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1be57c) {
            ctx->pc = 0x1BE70Cu;
            goto label_1be70c;
        }
    }
    ctx->pc = 0x1BE584u;
    // 0x1be584: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1be584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be588: 0x908309db  lbu         $v1, 0x9DB($a0)
    ctx->pc = 0x1be588u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2523)));
    // 0x1be58c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1be58cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1be590: 0x30660010  andi        $a2, $v1, 0x10
    ctx->pc = 0x1be590u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1be594: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x1BE594u;
    {
        const bool branch_taken_0x1be594 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be594) {
            ctx->pc = 0x1BE5C0u;
            goto label_1be5c0;
        }
    }
    ctx->pc = 0x1BE59Cu;
    // 0x1be59c: 0xc0585dc  jal         func_161770
    ctx->pc = 0x1BE59Cu;
    SET_GPR_U32(ctx, 31, 0x1BE5A4u);
    ctx->pc = 0x161770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161770u, 0x1BE59Cu, 0x1BE5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE5A4u;
label_1be5a4:
    // 0x1be5a4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1be5a4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1be5a8: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BE5A8u;
    {
        const bool branch_taken_0x1be5a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be5a8) {
            ctx->pc = 0x1BE5C0u;
            goto label_1be5c0;
        }
    }
    ctx->pc = 0x1BE5B0u;
    // 0x1be5b0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1be5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be5b4: 0xa08010a8  sb          $zero, 0x10A8($a0)
    ctx->pc = 0x1be5b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x1be5b8: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x1BE5B8u;
    {
        const bool branch_taken_0x1be5b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be5b8) {
            ctx->pc = 0x1BE70Cu;
            goto label_1be70c;
        }
    }
    ctx->pc = 0x1BE5C0u;
label_1be5c0:
    // 0x1be5c0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1be5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be5c4: 0x906509e7  lbu         $a1, 0x9E7($v1)
    ctx->pc = 0x1be5c4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1be5c8: 0x10a00050  beqz        $a1, . + 4 + (0x50 << 2)
    ctx->pc = 0x1BE5C8u;
    {
        const bool branch_taken_0x1be5c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be5c8) {
            ctx->pc = 0x1BE70Cu;
            goto label_1be70c;
        }
    }
    ctx->pc = 0x1BE5D0u;
    // 0x1be5d0: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1be5d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be5d4: 0x8cc70008  lw          $a3, 0x8($a2)
    ctx->pc = 0x1be5d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1be5d8: 0x3c080020  lui         $t0, 0x20
    ctx->pc = 0x1be5d8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32 << 16));
    // 0x1be5dc: 0xe81824  and         $v1, $a3, $t0
    ctx->pc = 0x1be5dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 8));
    // 0x1be5e0: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x1BE5E0u;
    {
        const bool branch_taken_0x1be5e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be5e0) {
            ctx->pc = 0x1BE674u;
            goto label_1be674;
        }
    }
    ctx->pc = 0x1BE5E8u;
    // 0x1be5e8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1be5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1be5ec: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1be5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be5f0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1be5f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1be5f4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1be5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1be5f8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1be5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be5fc: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x1be5fcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1be600: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1be600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be604: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1be604u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1be608: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1be608u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be60c: 0xa0a00003  sb          $zero, 0x3($a1)
    ctx->pc = 0x1be60cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1be610: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1be610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be614: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1be614u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1be618: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1be618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1be61c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1be61cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be620: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x1be620u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1be624: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1be624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be628: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1be628u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1be62c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1be62cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be630: 0x90a6156d  lbu         $a2, 0x156D($a1)
    ctx->pc = 0x1be630u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 5485)));
    // 0x1be634: 0x30c700ff  andi        $a3, $a2, 0xFF
    ctx->pc = 0x1be634u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1be638: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x1be638u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1be63c: 0x14e80004  bne         $a3, $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BE63Cu;
    {
        const bool branch_taken_0x1be63c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 8));
        if (branch_taken_0x1be63c) {
            ctx->pc = 0x1BE650u;
            goto label_1be650;
        }
    }
    ctx->pc = 0x1BE644u;
    // 0x1be644: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1be644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1be648: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1be648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be64c: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1be64cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
label_1be650:
    // 0x1be650: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1be650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1be654: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1be654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be658: 0xa464127a  sh          $a0, 0x127A($v1)
    ctx->pc = 0x1be658u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 4));
    // 0x1be65c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1be65cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be660: 0xa460127c  sh          $zero, 0x127C($v1)
    ctx->pc = 0x1be660u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 0));
    // 0x1be664: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1be664u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be668: 0xa0a0156c  sb          $zero, 0x156C($a1)
    ctx->pc = 0x1be668u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5484), (uint8_t)GPR_U32(ctx, 0));
    // 0x1be66c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1BE66Cu;
    {
        const bool branch_taken_0x1be66c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be66c) {
            ctx->pc = 0x1BE6A4u;
            goto label_1be6a4;
        }
    }
    ctx->pc = 0x1BE674u;
label_1be674:
    // 0x1be674: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1be674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1be678: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1be678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be67c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1be67cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1be680: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1be680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be684: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x1be684u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1be688: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1be688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be68c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1be68cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1be690: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1be690u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be694: 0xa0a00003  sb          $zero, 0x3($a1)
    ctx->pc = 0x1be694u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1be698: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x1be698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1be69c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1be69cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be6a0: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1be6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_1be6a4:
    // 0x1be6a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1be6a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1be6a8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1be6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be6ac: 0xe4601564  swc1        $f0, 0x1564($v1)
    ctx->pc = 0x1be6acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5476), bits); }
    // 0x1be6b0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1be6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be6b4: 0xc46000d4  lwc1        $f0, 0xD4($v1)
    ctx->pc = 0x1be6b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1be6b8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1be6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be6bc: 0xe4601568  swc1        $f0, 0x1568($v1)
    ctx->pc = 0x1be6bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5480), bits); }
    // 0x1be6c0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1be6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be6c4: 0xc4801568  lwc1        $f0, 0x1568($a0)
    ctx->pc = 0x1be6c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1be6c8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1be6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be6cc: 0xe4601570  swc1        $f0, 0x1570($v1)
    ctx->pc = 0x1be6ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5488), bits); }
    // 0x1be6d0: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1be6d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be6d4: 0x8cc31b6c  lw          $v1, 0x1B6C($a2)
    ctx->pc = 0x1be6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 7020)));
    // 0x1be6d8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BE6D8u;
    {
        const bool branch_taken_0x1be6d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1be6d8) {
            ctx->pc = 0x1BE6E8u;
            goto label_1be6e8;
        }
    }
    ctx->pc = 0x1BE6E0u;
    // 0x1be6e0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1be6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be6e4: 0xa4801574  sh          $zero, 0x1574($a0)
    ctx->pc = 0x1be6e4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 5492), (uint16_t)GPR_U32(ctx, 0));
label_1be6e8:
    // 0x1be6e8: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1be6e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be6ec: 0x8ca313e8  lw          $v1, 0x13E8($a1)
    ctx->pc = 0x1be6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 5096)));
    // 0x1be6f0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BE6F0u;
    {
        const bool branch_taken_0x1be6f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be6f0) {
            ctx->pc = 0x1BE704u;
            goto label_1be704;
        }
    }
    ctx->pc = 0x1BE6F8u;
    // 0x1be6f8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1be6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be6fc: 0xc0571d0  jal         func_15C740
    ctx->pc = 0x1BE6FCu;
    SET_GPR_U32(ctx, 31, 0x1BE704u);
    ctx->pc = 0x15C740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C740u, 0x1BE6FCu, 0x1BE704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE704u;
label_1be704:
    // 0x1be704: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1be704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be708: 0xa08010a8  sb          $zero, 0x10A8($a0)
    ctx->pc = 0x1be708u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4264), (uint8_t)GPR_U32(ctx, 0));
label_1be70c:
    // 0x1be70c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1be70cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be710: 0x8c641b6c  lw          $a0, 0x1B6C($v1)
    ctx->pc = 0x1be710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7020)));
    // 0x1be714: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BE714u;
    {
        const bool branch_taken_0x1be714 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be714) {
            ctx->pc = 0x1BE738u;
            goto label_1be738;
        }
    }
    ctx->pc = 0x1BE71Cu;
    // 0x1be71c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1be71cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1be720: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x1be720u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1be724: 0x3c05ff7f  lui         $a1, 0xFF7F
    ctx->pc = 0x1be724u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65407 << 16));
    // 0x1be728: 0x34a4ffff  ori         $a0, $a1, 0xFFFF
    ctx->pc = 0x1be728u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x1be72c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1be72cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1be730: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1be730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1be734: 0xac231a98  sw          $v1, 0x1A98($at)
    ctx->pc = 0x1be734u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
label_1be738:
    // 0x1be738: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1be738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be73c: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1be73cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1be740: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x1be740u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x1be744: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1be744u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1be748: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1BE748u;
    {
        const bool branch_taken_0x1be748 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be748) {
            ctx->pc = 0x1BE79Cu;
            goto label_1be79c;
        }
    }
    ctx->pc = 0x1BE750u;
    // 0x1be750: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1be750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be754: 0x906313a6  lbu         $v1, 0x13A6($v1)
    ctx->pc = 0x1be754u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5030)));
    // 0x1be758: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1be758u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1be75c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1be75cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1be760: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1BE760u;
    {
        const bool branch_taken_0x1be760 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1be760) {
            ctx->pc = 0x1BE790u;
            goto label_1be790;
        }
    }
    ctx->pc = 0x1BE768u;
    // 0x1be768: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1be768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1be76c: 0x10850008  beq         $a0, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BE76Cu;
    {
        const bool branch_taken_0x1be76c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x1be76c) {
            ctx->pc = 0x1BE790u;
            goto label_1be790;
        }
    }
    ctx->pc = 0x1BE774u;
    // 0x1be774: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1be774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1be778: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BE778u;
    {
        const bool branch_taken_0x1be778 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1be778) {
            ctx->pc = 0x1BE79Cu;
            goto label_1be79c;
        }
    }
    ctx->pc = 0x1BE780u;
    // 0x1be780: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BE780u;
    {
        const bool branch_taken_0x1be780 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be780) {
            ctx->pc = 0x1BE79Cu;
            goto label_1be79c;
        }
    }
    ctx->pc = 0x1BE788u;
    // 0x1be788: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1BE788u;
    {
        const bool branch_taken_0x1be788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be788) {
            ctx->pc = 0x1BE79Cu;
            goto label_1be79c;
        }
    }
    ctx->pc = 0x1BE790u;
label_1be790:
    // 0x1be790: 0xc0c5244  jal         func_314910
    ctx->pc = 0x1BE790u;
    SET_GPR_U32(ctx, 31, 0x1BE798u);
    ctx->pc = 0x314910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314910u, 0x1BE790u, 0x1BE798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE798u;
label_1be798:
    // 0x1be798: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1be798u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1be79c:
    // 0x1be79c: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x1be79cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1be7a0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1be7a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1be7a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1be7a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1be7a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1be7a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1be7ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1be7acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be7b0: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1be7b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1be7b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE7B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE7B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BE7BCu;
}
