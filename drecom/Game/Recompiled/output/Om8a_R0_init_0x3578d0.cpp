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

// Function: Om8a_R0_init
// Address: 0x3578d0 - 0x357a60
void Om8a_R0_init_0x3578d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om8a_R0_init_0x3578d0");
#endif

    switch (ctx->pc) {
        case 0x3578f0u: goto label_3578f0;
        default: break;
    }

    ctx->pc = 0x3578d0u;

    // 0x3578d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3578d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3578d4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x3578d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x3578d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3578d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3578dc: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x3578dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x3578e0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3578e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3578e4: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x3578e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3578e8: 0xc077a6c  jal         func_1DE9B0
    ctx->pc = 0x3578E8u;
    SET_GPR_U32(ctx, 31, 0x3578F0u);
    ctx->pc = 0x1DE9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE9B0u, 0x3578E8u, 0x3578F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3578F0u;
label_3578f0:
    // 0x3578f0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3578f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3578f4: 0x9483000c  lhu         $v1, 0xC($a0)
    ctx->pc = 0x3578f4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3578f8: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x3578f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x3578fc: 0xa483000c  sh          $v1, 0xC($a0)
    ctx->pc = 0x3578fcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x357900: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x357900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x357904: 0x8c641240  lw          $a0, 0x1240($v1)
    ctx->pc = 0x357904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4672)));
    // 0x357908: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x357908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x35790c: 0x10830044  beq         $a0, $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x35790Cu;
    {
        const bool branch_taken_0x35790c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x35790c) {
            ctx->pc = 0x357A20u;
            goto label_357a20;
        }
    }
    ctx->pc = 0x357914u;
    // 0x357914: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x357914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x357918: 0x8c631240  lw          $v1, 0x1240($v1)
    ctx->pc = 0x357918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4672)));
    // 0x35791c: 0x24700004  addiu       $s0, $v1, 0x4
    ctx->pc = 0x35791cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x357920: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x357920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x357924: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x357924u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x357928: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x357928u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x35792c: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x35792cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x357930: 0x8e04008c  lw          $a0, 0x8C($s0)
    ctx->pc = 0x357930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x357934: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x357934u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x357938: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x357938u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x35793c: 0xae03008c  sw          $v1, 0x8C($s0)
    ctx->pc = 0x35793cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 3));
    // 0x357940: 0x8e0400dc  lw          $a0, 0xDC($s0)
    ctx->pc = 0x357940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x357944: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x357944u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x357948: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x357948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x35794c: 0xae0300dc  sw          $v1, 0xDC($s0)
    ctx->pc = 0x35794cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 3));
    // 0x357950: 0x8e0401cc  lw          $a0, 0x1CC($s0)
    ctx->pc = 0x357950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 460)));
    // 0x357954: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x357954u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x357958: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x357958u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x35795c: 0xae0301cc  sw          $v1, 0x1CC($s0)
    ctx->pc = 0x35795cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 460), GPR_U32(ctx, 3));
    // 0x357960: 0x8e04021c  lw          $a0, 0x21C($s0)
    ctx->pc = 0x357960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 540)));
    // 0x357964: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x357964u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x357968: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x357968u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x35796c: 0xae03021c  sw          $v1, 0x21C($s0)
    ctx->pc = 0x35796cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 540), GPR_U32(ctx, 3));
    // 0x357970: 0x8e04026c  lw          $a0, 0x26C($s0)
    ctx->pc = 0x357970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 620)));
    // 0x357974: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x357974u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x357978: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x357978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x35797c: 0xae03026c  sw          $v1, 0x26C($s0)
    ctx->pc = 0x35797cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 620), GPR_U32(ctx, 3));
    // 0x357980: 0x8e0402bc  lw          $a0, 0x2BC($s0)
    ctx->pc = 0x357980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 700)));
    // 0x357984: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x357984u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x357988: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x357988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x35798c: 0xae0302bc  sw          $v1, 0x2BC($s0)
    ctx->pc = 0x35798cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 700), GPR_U32(ctx, 3));
    // 0x357990: 0x8e04030c  lw          $a0, 0x30C($s0)
    ctx->pc = 0x357990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 780)));
    // 0x357994: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x357994u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x357998: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x357998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x35799c: 0xae03030c  sw          $v1, 0x30C($s0)
    ctx->pc = 0x35799cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 780), GPR_U32(ctx, 3));
    // 0x3579a0: 0x8e0403ac  lw          $a0, 0x3AC($s0)
    ctx->pc = 0x3579a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 940)));
    // 0x3579a4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3579a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3579a8: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x3579a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3579ac: 0xae0303ac  sw          $v1, 0x3AC($s0)
    ctx->pc = 0x3579acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 940), GPR_U32(ctx, 3));
    // 0x3579b0: 0x8e0403fc  lw          $a0, 0x3FC($s0)
    ctx->pc = 0x3579b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1020)));
    // 0x3579b4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3579b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3579b8: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x3579b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3579bc: 0xae0303fc  sw          $v1, 0x3FC($s0)
    ctx->pc = 0x3579bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1020), GPR_U32(ctx, 3));
    // 0x3579c0: 0x8e04044c  lw          $a0, 0x44C($s0)
    ctx->pc = 0x3579c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1100)));
    // 0x3579c4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3579c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3579c8: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x3579c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3579cc: 0xae03044c  sw          $v1, 0x44C($s0)
    ctx->pc = 0x3579ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1100), GPR_U32(ctx, 3));
    // 0x3579d0: 0x8e04049c  lw          $a0, 0x49C($s0)
    ctx->pc = 0x3579d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1180)));
    // 0x3579d4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3579d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3579d8: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x3579d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3579dc: 0xae03049c  sw          $v1, 0x49C($s0)
    ctx->pc = 0x3579dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1180), GPR_U32(ctx, 3));
    // 0x3579e0: 0x8e0404ec  lw          $a0, 0x4EC($s0)
    ctx->pc = 0x3579e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1260)));
    // 0x3579e4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3579e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3579e8: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x3579e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3579ec: 0xae0304ec  sw          $v1, 0x4EC($s0)
    ctx->pc = 0x3579ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1260), GPR_U32(ctx, 3));
    // 0x3579f0: 0x8e04053c  lw          $a0, 0x53C($s0)
    ctx->pc = 0x3579f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1340)));
    // 0x3579f4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3579f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3579f8: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x3579f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3579fc: 0xae03053c  sw          $v1, 0x53C($s0)
    ctx->pc = 0x3579fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1340), GPR_U32(ctx, 3));
    // 0x357a00: 0x8e04058c  lw          $a0, 0x58C($s0)
    ctx->pc = 0x357a00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1420)));
    // 0x357a04: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x357a04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x357a08: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x357a08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x357a0c: 0xae03058c  sw          $v1, 0x58C($s0)
    ctx->pc = 0x357a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1420), GPR_U32(ctx, 3));
    // 0x357a10: 0x8e0405dc  lw          $a0, 0x5DC($s0)
    ctx->pc = 0x357a10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1500)));
    // 0x357a14: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x357a14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x357a18: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x357a18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x357a1c: 0xae0305dc  sw          $v1, 0x5DC($s0)
    ctx->pc = 0x357a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1500), GPR_U32(ctx, 3));
label_357a20:
    // 0x357a20: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x357a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x357a24: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x357a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x357a28: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x357a28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x357a2c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x357a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x357a30: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x357a30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x357a34: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x357a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x357a38: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x357a38u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x357a3c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x357a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x357a40: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x357a40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x357a44: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x357a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x357a48: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x357a48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x357a4c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x357a4cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x357a50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x357a50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x357a54: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x357a54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x357a58: 0x3e00008  jr          $ra
    ctx->pc = 0x357A58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x357A58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x357A60u;
}
