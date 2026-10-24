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

// Function: entry_00377264
// Address: 0x377264 - 0x3772e8
void entry_00377264_0x377264(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00377264_0x377264");
#endif

    ctx->pc = 0x377264u;

    // 0x377264: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x377264u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x377268: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x377268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x37726c: 0x2442bb40  addiu       $v0, $v0, -0x44C0
    ctx->pc = 0x37726cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949696));
    // 0x377270: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x377270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x377274: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x377274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x377278: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x377278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x37727c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x37727cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x377280: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x377280u;
    {
        const bool branch_taken_0x377280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x377280) {
            ctx->pc = 0x3772E8u;
            return;
        }
    }
    ctx->pc = 0x377288u;
    // 0x377288: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x377288u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x37728c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x37728cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x377290: 0x2442bb40  addiu       $v0, $v0, -0x44C0
    ctx->pc = 0x377290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949696));
    // 0x377294: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x377294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x377298: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x377298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x37729c: 0xac401304  sw          $zero, 0x1304($v0)
    ctx->pc = 0x37729cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4868), GPR_U32(ctx, 0));
    // 0x3772a0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x3772a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x3772a4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3772a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3772a8: 0x2442bb40  addiu       $v0, $v0, -0x44C0
    ctx->pc = 0x3772a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949696));
    // 0x3772ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3772acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3772b0: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x3772b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3772b4: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x3772b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x3772b8: 0x90220396  lbu         $v0, 0x396($at)
    ctx->pc = 0x3772b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x9A0396u));
    // 0x3772bc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3772bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3772c0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x3772c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3772c4: 0x3c02009a  lui         $v0, 0x9A
    ctx->pc = 0x3772c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)154 << 16));
    // 0x3772c8: 0x24420350  addiu       $v0, $v0, 0x350
    ctx->pc = 0x3772c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 848));
    // 0x3772cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3772ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3772d0: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x3772d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x3772d4: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x3772d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x3772d8: 0x90220396  lbu         $v0, 0x396($at)
    ctx->pc = 0x3772d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x9A0396u));
    // 0x3772dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3772dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3772e0: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x3772e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x3772e4: 0xa0220396  sb          $v0, 0x396($at)
    ctx->pc = 0x3772e4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x9A0396u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x9A0396u, _value); } while (0);
    ctx->pc = 0x3772e8u;
}
