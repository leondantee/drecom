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

// Function: Em05_R1_atk_osae
// Address: 0x20d8a0 - 0x20dc4c
void Em05_R1_atk_osae_0x20d8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em05_R1_atk_osae_0x20d8a0");
#endif

    switch (ctx->pc) {
        case 0x20d924u: goto label_20d924;
        case 0x20d94cu: goto label_20d94c;
        case 0x20d958u: goto label_20d958;
        case 0x20d968u: goto label_20d968;
        case 0x20d974u: goto label_20d974;
        case 0x20d998u: goto label_20d998;
        case 0x20da1cu: goto label_20da1c;
        case 0x20da30u: goto label_20da30;
        case 0x20da40u: goto label_20da40;
        case 0x20da58u: goto label_20da58;
        case 0x20da98u: goto label_20da98;
        case 0x20dac4u: goto label_20dac4;
        case 0x20dae8u: goto label_20dae8;
        case 0x20db04u: goto label_20db04;
        case 0x20db18u: goto label_20db18;
        case 0x20db2cu: goto label_20db2c;
        case 0x20db3cu: goto label_20db3c;
        case 0x20db54u: goto label_20db54;
        case 0x20db70u: goto label_20db70;
        case 0x20db7cu: goto label_20db7c;
        case 0x20dbb0u: goto label_20dbb0;
        default: break;
    }

    ctx->pc = 0x20d8a0u;

    // 0x20d8a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x20d8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x20d8a4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x20d8a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x20d8a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20d8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20d8ac: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x20d8acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x20d8b0: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x20d8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x20d8b4: 0x2470dbc0  addiu       $s0, $v1, -0x2440
    ctx->pc = 0x20d8b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
    // 0x20d8b8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20d8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20d8bc: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x20d8bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x20d8c0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x20d8c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x20d8c4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x20d8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20d8c8: 0x10830069  beq         $a0, $v1, . + 4 + (0x69 << 2)
    ctx->pc = 0x20D8C8u;
    {
        const bool branch_taken_0x20d8c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x20d8c8) {
            ctx->pc = 0x20DA70u;
            goto label_20da70;
        }
    }
    ctx->pc = 0x20D8D0u;
    // 0x20d8d0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x20d8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20d8d4: 0x10830049  beq         $a0, $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x20D8D4u;
    {
        const bool branch_taken_0x20d8d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x20d8d4) {
            ctx->pc = 0x20D9FCu;
            goto label_20d9fc;
        }
    }
    ctx->pc = 0x20D8DCu;
    // 0x20d8dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20d8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20d8e0: 0x10830016  beq         $a0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x20D8E0u;
    {
        const bool branch_taken_0x20d8e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x20d8e0) {
            ctx->pc = 0x20D93Cu;
            goto label_20d93c;
        }
    }
    ctx->pc = 0x20D8E8u;
    // 0x20d8e8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20D8E8u;
    {
        const bool branch_taken_0x20d8e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d8e8) {
            ctx->pc = 0x20D8F8u;
            goto label_20d8f8;
        }
    }
    ctx->pc = 0x20D8F0u;
    // 0x20d8f0: 0x100000d1  b           . + 4 + (0xD1 << 2)
    ctx->pc = 0x20D8F0u;
    {
        const bool branch_taken_0x20d8f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d8f0) {
            ctx->pc = 0x20DC38u;
            goto label_20dc38;
        }
    }
    ctx->pc = 0x20D8F8u;
label_20d8f8:
    // 0x20d8f8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x20d8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20d8fc: 0x8c421310  lw          $v0, 0x1310($v0)
    ctx->pc = 0x20d8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4880)));
    // 0x20d900: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x20d900u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x20d904: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x20d904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20d908: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x20d908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20d90c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x20d90cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x20d910: 0x24063c1a  addiu       $a2, $zero, 0x3C1A
    ctx->pc = 0x20d910u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15386));
    // 0x20d914: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x20d914u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20d918: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x20d918u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x20d91c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x20D91Cu;
    SET_GPR_U32(ctx, 31, 0x20D924u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x20D91Cu, 0x20D924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D924u;
label_20d924:
    // 0x20d924: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x20d924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20d928: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x20d928u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x20d92c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20d92cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20d930: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x20d930u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x20d934: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20d934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20d938: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x20d938u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_20d93c:
    // 0x20d93c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x20d93cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20d940: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x20d940u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20d944: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x20D944u;
    SET_GPR_U32(ctx, 31, 0x20D94Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x20D944u, 0x20D94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D94Cu;
label_20d94c:
    // 0x20d94c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x20d94cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20d950: 0xc05cd34  jal         func_1734D0
    ctx->pc = 0x20D950u;
    SET_GPR_U32(ctx, 31, 0x20D958u);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x20D950u, 0x20D958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D958u;
label_20d958:
    // 0x20d958: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x20d958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20d95c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x20d95cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20d960: 0xc080f60  jal         func_203D80
    ctx->pc = 0x20D960u;
    SET_GPR_U32(ctx, 31, 0x20D968u);
    ctx->pc = 0x203D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203D80u, 0x20D960u, 0x20D968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D968u;
label_20d968:
    // 0x20d968: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x20d968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20d96c: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x20D96Cu;
    SET_GPR_U32(ctx, 31, 0x20D974u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x20D96Cu, 0x20D974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D974u;
label_20d974:
    // 0x20d974: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20d974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20d978: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x20d978u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x20d97c: 0x106000ae  beqz        $v1, . + 4 + (0xAE << 2)
    ctx->pc = 0x20D97Cu;
    {
        const bool branch_taken_0x20d97c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d97c) {
            ctx->pc = 0x20DC38u;
            goto label_20dc38;
        }
    }
    ctx->pc = 0x20D984u;
    // 0x20d984: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x20d984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20d988: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x20d988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x20d98c: 0x2445a120  addiu       $a1, $v0, -0x5EE0
    ctx->pc = 0x20d98cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943008));
    // 0x20d990: 0xc06cd40  jal         func_1B3500
    ctx->pc = 0x20D990u;
    SET_GPR_U32(ctx, 31, 0x20D998u);
    ctx->pc = 0x1B3500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3500u, 0x20D990u, 0x20D998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D998u;
label_20d998:
    // 0x20d998: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20D998u;
    {
        const bool branch_taken_0x20d998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d998) {
            ctx->pc = 0x20D9B8u;
            goto label_20d9b8;
        }
    }
    ctx->pc = 0x20D9A0u;
    // 0x20d9a0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x20d9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20d9a4: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x20d9a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x20d9a8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x20d9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x20d9ac: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x20d9acu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x20d9b0: 0x100000a1  b           . + 4 + (0xA1 << 2)
    ctx->pc = 0x20D9B0u;
    {
        const bool branch_taken_0x20d9b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d9b0) {
            ctx->pc = 0x20DC38u;
            goto label_20dc38;
        }
    }
    ctx->pc = 0x20D9B8u;
label_20d9b8:
    // 0x20d9b8: 0x240400b4  addiu       $a0, $zero, 0xB4
    ctx->pc = 0x20d9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x20d9bc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20d9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20d9c0: 0xac64134c  sw          $a0, 0x134C($v1)
    ctx->pc = 0x20d9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4940), GPR_U32(ctx, 4));
    // 0x20d9c4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20d9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20d9c8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20d9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20d9cc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x20d9ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x20d9d0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x20d9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20d9d4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20d9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20d9d8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x20d9d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x20d9dc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20d9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20d9e0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x20d9e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x20d9e4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20d9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20d9e8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x20d9e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x20d9ec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20d9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20d9f0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x20d9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x20d9f4: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x20D9F4u;
    {
        const bool branch_taken_0x20d9f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d9f4) {
            ctx->pc = 0x20DC38u;
            goto label_20dc38;
        }
    }
    ctx->pc = 0x20D9FCu;
label_20d9fc:
    // 0x20d9fc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x20d9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20da00: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x20da00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20da04: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x20da04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x20da08: 0x2406051b  addiu       $a2, $zero, 0x51B
    ctx->pc = 0x20da08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1307));
    // 0x20da0c: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x20da0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x20da10: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x20da10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x20da14: 0xc0965d0  jal         func_259740
    ctx->pc = 0x20DA14u;
    SET_GPR_U32(ctx, 31, 0x20DA1Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x20DA14u, 0x20DA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DA1Cu;
label_20da1c:
    // 0x20da1c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x20da1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20da20: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x20da20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20da24: 0x244512b0  addiu       $a1, $v0, 0x12B0
    ctx->pc = 0x20da24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4784));
    // 0x20da28: 0xc096c60  jal         func_25B180
    ctx->pc = 0x20DA28u;
    SET_GPR_U32(ctx, 31, 0x20DA30u);
    ctx->pc = 0x25B180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B180u, 0x20DA28u, 0x20DA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DA30u;
label_20da30:
    // 0x20da30: 0x260412a0  addiu       $a0, $s0, 0x12A0
    ctx->pc = 0x20da30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4768));
    // 0x20da34: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x20da34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x20da38: 0xc040c9e  jal         func_103278
    ctx->pc = 0x20DA38u;
    SET_GPR_U32(ctx, 31, 0x20DA40u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x20DA40u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x20DA40u) { return; }
    ctx->pc = 0x20DA40u;
label_20da40:
    // 0x20da40: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20da40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20da44: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x20da44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20da48: 0x246412a0  addiu       $a0, $v1, 0x12A0
    ctx->pc = 0x20da48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4768));
    // 0x20da4c: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x20da4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x20da50: 0xc040c9e  jal         func_103278
    ctx->pc = 0x20DA50u;
    SET_GPR_U32(ctx, 31, 0x20DA58u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x20DA58u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x20DA58u) { return; }
    ctx->pc = 0x20DA58u;
label_20da58:
    // 0x20da58: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x20da58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20da5c: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x20da5cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x20da60: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20da60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20da64: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x20da64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x20da68: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20da68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20da6c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x20da6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_20da70:
    // 0x20da70: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x20da70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x20da74: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20da74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20da78: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20da78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20da7c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x20da7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20da80: 0x246412a0  addiu       $a0, $v1, 0x12A0
    ctx->pc = 0x20da80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4768));
    // 0x20da84: 0x260512a0  addiu       $a1, $s0, 0x12A0
    ctx->pc = 0x20da84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4768));
    // 0x20da88: 0x244612b0  addiu       $a2, $v0, 0x12B0
    ctx->pc = 0x20da88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4784));
    // 0x20da8c: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x20da8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x20da90: 0xc05ce04  jal         func_173810
    ctx->pc = 0x20DA90u;
    SET_GPR_U32(ctx, 31, 0x20DA98u);
    ctx->pc = 0x173810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173810u, 0x20DA90u, 0x20DA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DA98u;
label_20da98:
    // 0x20da98: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x20da98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20da9c: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x20da9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x20daa0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x20daa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20daa4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20daa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20daa8: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x20daa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x20daac: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x20daacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x20dab0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x20dab0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x20dab4: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x20dab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20dab8: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x20dab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x20dabc: 0xc058f50  jal         func_163D40
    ctx->pc = 0x20DABCu;
    SET_GPR_U32(ctx, 31, 0x20DAC4u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x20DABCu, 0x20DAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DAC4u;
label_20dac4:
    // 0x20dac4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x20dac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20dac8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x20dac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x20dacc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20daccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20dad0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x20dad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20dad4: 0x246412a0  addiu       $a0, $v1, 0x12A0
    ctx->pc = 0x20dad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4768));
    // 0x20dad8: 0x244512a0  addiu       $a1, $v0, 0x12A0
    ctx->pc = 0x20dad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4768));
    // 0x20dadc: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x20dadcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x20dae0: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x20DAE0u;
    SET_GPR_U32(ctx, 31, 0x20DAE8u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x20DAE0u, 0x20DAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DAE8u;
label_20dae8:
    // 0x20dae8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20dae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20daec: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x20daecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20daf0: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x20daf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x20daf4: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x20daf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x20daf8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x20daf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x20dafc: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x20DAFCu;
    SET_GPR_U32(ctx, 31, 0x20DB04u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x20DAFCu, 0x20DB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DB04u;
label_20db04:
    // 0x20db04: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x20db04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20db08: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x20db08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20db0c: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x20db0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20db10: 0xc05cd58  jal         func_173560
    ctx->pc = 0x20DB10u;
    SET_GPR_U32(ctx, 31, 0x20DB18u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x20DB10u, 0x20DB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DB18u;
label_20db18:
    // 0x20db18: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x20db18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20db1c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x20db1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x20db20: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x20db20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x20db24: 0xc040c9e  jal         func_103278
    ctx->pc = 0x20DB24u;
    SET_GPR_U32(ctx, 31, 0x20DB2Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x20DB2Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x20DB2Cu) { return; }
    ctx->pc = 0x20DB2Cu;
label_20db2c:
    // 0x20db2c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x20db2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20db30: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x20db30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20db34: 0xc080f60  jal         func_203D80
    ctx->pc = 0x20DB34u;
    SET_GPR_U32(ctx, 31, 0x20DB3Cu);
    ctx->pc = 0x203D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203D80u, 0x20DB34u, 0x20DB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DB3Cu;
label_20db3c:
    // 0x20db3c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x20db3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20db40: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x20db40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x20db44: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x20db44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x20db48: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x20db48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x20db4c: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x20DB4Cu;
    SET_GPR_U32(ctx, 31, 0x20DB54u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x20DB4Cu, 0x20DB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DB54u;
label_20db54:
    // 0x20db54: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20db54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20db58: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x20db58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20db5c: 0x246412a0  addiu       $a0, $v1, 0x12A0
    ctx->pc = 0x20db5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4768));
    // 0x20db60: 0x244512a0  addiu       $a1, $v0, 0x12A0
    ctx->pc = 0x20db60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4768));
    // 0x20db64: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x20db64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x20db68: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x20DB68u;
    SET_GPR_U32(ctx, 31, 0x20DB70u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x20DB68u, 0x20DB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DB70u;
label_20db70:
    // 0x20db70: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x20db70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20db74: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x20DB74u;
    SET_GPR_U32(ctx, 31, 0x20DB7Cu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x20DB74u, 0x20DB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DB7Cu;
label_20db7c:
    // 0x20db7c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20db7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20db80: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x20db80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x20db84: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x20DB84u;
    {
        const bool branch_taken_0x20db84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20db84) {
            ctx->pc = 0x20DC38u;
            goto label_20dc38;
        }
    }
    ctx->pc = 0x20DB8Cu;
    // 0x20db8c: 0x2403012c  addiu       $v1, $zero, 0x12C
    ctx->pc = 0x20db8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x20db90: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x20db90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20db94: 0xac43134c  sw          $v1, 0x134C($v0)
    ctx->pc = 0x20db94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4940), GPR_U32(ctx, 3));
    // 0x20db98: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x20db98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20db9c: 0xa04010a8  sb          $zero, 0x10A8($v0)
    ctx->pc = 0x20db9cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x20dba0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x20dba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x20dba4: 0x2444dce0  addiu       $a0, $v0, -0x2320
    ctx->pc = 0x20dba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x20dba8: 0xc067588  jal         func_19D620
    ctx->pc = 0x20DBA8u;
    SET_GPR_U32(ctx, 31, 0x20DBB0u);
    ctx->pc = 0x19D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D620u, 0x20DBA8u, 0x20DBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DBB0u;
label_20dbb0:
    // 0x20dbb0: 0x3c03461c  lui         $v1, 0x461C
    ctx->pc = 0x20dbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17948 << 16));
    // 0x20dbb4: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x20dbb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x20dbb8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x20dbb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20dbbc: 0x0  nop
    ctx->pc = 0x20dbbcu;
    // NOP
    // 0x20dbc0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x20dbc0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20dbc4: 0x0  nop
    ctx->pc = 0x20dbc4u;
    // NOP
    // 0x20dbc8: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x20DBC8u;
    {
        const bool branch_taken_0x20dbc8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20dbc8) {
            ctx->pc = 0x20DC08u;
            goto label_20dc08;
        }
    }
    ctx->pc = 0x20DBD0u;
    // 0x20dbd0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20dbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20dbd4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20dbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20dbd8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x20dbd8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x20dbdc: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x20dbdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x20dbe0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20dbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20dbe4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x20dbe4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x20dbe8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20dbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20dbec: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x20dbecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x20dbf0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20dbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20dbf4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x20dbf4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x20dbf8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20dbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20dbfc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x20dbfcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x20dc00: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x20DC00u;
    {
        const bool branch_taken_0x20dc00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20dc00) {
            ctx->pc = 0x20DC38u;
            goto label_20dc38;
        }
    }
    ctx->pc = 0x20DC08u;
label_20dc08:
    // 0x20dc08: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20dc08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20dc0c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20dc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20dc10: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x20dc10u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x20dc14: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x20dc14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x20dc18: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20dc18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20dc1c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x20dc1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x20dc20: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20dc20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20dc24: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x20dc24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x20dc28: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20dc28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20dc2c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x20dc2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x20dc30: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20dc30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20dc34: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x20dc34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_20dc38:
    // 0x20dc38: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x20dc38u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20dc3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20dc3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20dc40: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x20dc40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x20dc44: 0x3e00008  jr          $ra
    ctx->pc = 0x20DC44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20DC44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20DC4Cu;
}
