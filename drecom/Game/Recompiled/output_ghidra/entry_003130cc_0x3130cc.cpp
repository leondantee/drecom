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

// Function: entry_003130cc
// Address: 0x3130cc - 0x313190
void entry_003130cc_0x3130cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003130cc_0x3130cc");
#endif

    ctx->pc = 0x3130ccu;

    // 0x3130cc: 0xa200011c  sb          $zero, 0x11C($s0)
    ctx->pc = 0x3130ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x3130d0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3130d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3130d4: 0xae02012c  sw          $v0, 0x12C($s0)
    ctx->pc = 0x3130d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 2));
    // 0x3130d8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x3130d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x3130dc: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x3130dcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x3130e0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x3130e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3130e4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3130e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3130e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3130e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3130ec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3130ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3130f0: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x3130f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3130f4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x3130f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x3130f8: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x3130f8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x3130fc: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x3130fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x313100: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x313100u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x313104: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x313104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x313108: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x313108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x31310c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x31310cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x313110: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x313110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x313114: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x313114u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x313118: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x313118u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x31311c: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x31311cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x313120: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x313120u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x313124: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x313124u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x313128: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x313128u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x31312c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x31312cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x313130: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x313130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x313134: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x313134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x313138: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x313138u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x31313c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x31313cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x313140: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x313140u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x313144: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x313144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x313148: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x313148u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x31314c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31314cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x313150: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x313150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x313154: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x313154u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x313158: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x313158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x31315c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x31315cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x313160: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x313160u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x313164: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x313164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x313168: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x313168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x31316c: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x31316cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x313170: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x313170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x313174: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x313174u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x313178: 0x0  nop
    ctx->pc = 0x313178u;
    // NOP
    // 0x31317c: 0x0  nop
    ctx->pc = 0x31317cu;
    // NOP
    // 0x313180: 0x1010  mfhi        $v0
    ctx->pc = 0x313180u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x313184: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x313184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x313188: 0xae020130  sw          $v0, 0x130($s0)
    ctx->pc = 0x313188u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 2));
    // 0x31318c: 0x0  nop
    ctx->pc = 0x31318cu;
    // NOP
    ctx->pc = 0x313190u;
}
