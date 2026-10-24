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

// Function: entry_001965b0
// Address: 0x1965b0 - 0x196614
void entry_001965b0_0x1965b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001965b0_0x1965b0");
#endif

    ctx->pc = 0x1965b0u;

    // 0x1965b0: 0x142080  sll         $a0, $s4, 2
    ctx->pc = 0x1965b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x1965b4: 0x2041821  addu        $v1, $s0, $a0
    ctx->pc = 0x1965b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x1965b8: 0xc4600104  lwc1        $f0, 0x104($v1)
    ctx->pc = 0x1965b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1965bc: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x1965bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1965c0: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1965c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1965c4: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x1965c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1965c8: 0x1418c0  sll         $v1, $s4, 3
    ctx->pc = 0x1965c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x1965cc: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1965ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1965d0: 0xdc642408  ld          $a0, 0x2408($v1)
    ctx->pc = 0x1965d0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 9224)));
    // 0x1965d4: 0x1218c0  sll         $v1, $s2, 3
    ctx->pc = 0x1965d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x1965d8: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1965d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1965dc: 0xfc642208  sd          $a0, 0x2208($v1)
    ctx->pc = 0x1965dcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8712), GPR_U64(ctx, 4));
    // 0x1965e0: 0x141840  sll         $v1, $s4, 1
    ctx->pc = 0x1965e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x1965e4: 0x2032021  addu        $a0, $s0, $v1
    ctx->pc = 0x1965e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1965e8: 0x94832608  lhu         $v1, 0x2608($a0)
    ctx->pc = 0x1965e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 9736)));
    // 0x1965ec: 0x3076ffff  andi        $s6, $v1, 0xFFFF
    ctx->pc = 0x1965ecu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1965f0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1965f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1965f4: 0x162180  sll         $a0, $s6, 6
    ctx->pc = 0x1965f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 22), 6));
    // 0x1965f8: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x1965f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1965fc: 0x649821  addu        $s3, $v1, $a0
    ctx->pc = 0x1965fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x196600: 0x96630036  lhu         $v1, 0x36($s3)
    ctx->pc = 0x196600u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 54)));
    // 0x196604: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x196604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x196608: 0xa6630036  sh          $v1, 0x36($s3)
    ctx->pc = 0x196608u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 54), (uint16_t)GPR_U32(ctx, 3));
    // 0x19660c: 0x1000ff0c  b           . + 4 + (-0xF4 << 2)
    ctx->pc = 0x19660Cu;
    {
        const bool branch_taken_0x19660c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19660c) {
            ctx->pc = 0x196240u;
            return;
        }
    }
    ctx->pc = 0x196614u;
}
