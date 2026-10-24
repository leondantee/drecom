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

// Function: entry_0032e510
// Address: 0x32e510 - 0x32e5bc
void entry_0032e510_0x32e510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032e510_0x32e510");
#endif

    switch (ctx->pc) {
        case 0x32e54cu: goto label_32e54c;
        default: break;
    }

    ctx->pc = 0x32e510u;

    // 0x32e510: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x32e510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x32e514: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x32e514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32e518: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x32e518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x32e51c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x32e51cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x32e520: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x32E520u;
    {
        const bool branch_taken_0x32e520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e520) {
            ctx->pc = 0x32E504u;
            return;
        }
    }
    ctx->pc = 0x32E528u;
    // 0x32e528: 0x8e0328b4  lw          $v1, 0x28B4($s0)
    ctx->pc = 0x32e528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10420)));
    // 0x32e52c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x32e52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x32e530: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x32e530u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x32e534: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x32e534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x32e538: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x32e538u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32e53c: 0x97a40030  lhu         $a0, 0x30($sp)
    ctx->pc = 0x32e53cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32e540: 0x24060081  addiu       $a2, $zero, 0x81
    ctx->pc = 0x32e540u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
    // 0x32e544: 0xc0764e0  jal         func_1D9380
    ctx->pc = 0x32E544u;
    SET_GPR_U32(ctx, 31, 0x32E54Cu);
    ctx->pc = 0x1D9380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9380u, 0x32E544u, 0x32E54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E54Cu;
label_32e54c:
    // 0x32e54c: 0x260428b4  addiu       $a0, $s0, 0x28B4
    ctx->pc = 0x32e54cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 10420));
    // 0x32e550: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x32e550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x32e554: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x32e554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x32e558: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x32e558u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x32e55c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x32e55cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x32e560: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x32e560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x32e564: 0xafa30038  sw          $v1, 0x38($sp)
    ctx->pc = 0x32e564u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
    // 0x32e568: 0x8e0428b4  lw          $a0, 0x28B4($s0)
    ctx->pc = 0x32e568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10420)));
    // 0x32e56c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x32e56cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x32e570: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x32e570u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x32e574: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x32e574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x32e578: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x32e578u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x32e57c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x32e57cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x32e580: 0x9463fffc  lhu         $v1, -0x4($v1)
    ctx->pc = 0x32e580u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294967292)));
    // 0x32e584: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x32e584u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x32e588: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x32e588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x32e58c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x32e58cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x32e590: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x32e590u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x32e594: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x32e594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x32e598: 0xa4640004  sh          $a0, 0x4($v1)
    ctx->pc = 0x32e598u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 4));
    // 0x32e59c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x32e59cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x32e5a0: 0x9463fffe  lhu         $v1, -0x2($v1)
    ctx->pc = 0x32e5a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294967294)));
    // 0x32e5a4: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x32e5a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x32e5a8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x32e5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x32e5ac: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x32e5acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x32e5b0: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x32e5b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x32e5b4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x32e5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x32e5b8: 0xa4640006  sh          $a0, 0x6($v1)
    ctx->pc = 0x32e5b8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x32e5bcu;
}
