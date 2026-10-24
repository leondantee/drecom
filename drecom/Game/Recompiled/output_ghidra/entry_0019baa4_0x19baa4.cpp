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

// Function: entry_0019baa4
// Address: 0x19baa4 - 0x19bb08
void entry_0019baa4_0x19baa4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019baa4_0x19baa4");
#endif

    ctx->pc = 0x19baa4u;

    // 0x19baa4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x19baa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19baa8: 0x94630094  lhu         $v1, 0x94($v1)
    ctx->pc = 0x19baa8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x19baac: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x19baacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x19bab0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x19bab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19bab4: 0x14830014  bne         $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x19BAB4u;
    {
        const bool branch_taken_0x19bab4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x19bab4) {
            ctx->pc = 0x19BB08u;
            return;
        }
    }
    ctx->pc = 0x19BABCu;
    // 0x19babc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x19babcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19bac0: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x19bac0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x19bac4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19bac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19bac8: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x19bac8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x19bacc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x19baccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19bad0: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x19bad0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x19bad4: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x19bad4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x19bad8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x19bad8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x19badc: 0x286100b5  slti        $at, $v1, 0xB5
    ctx->pc = 0x19badcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)181) ? 1 : 0);
    // 0x19bae0: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x19BAE0u;
    {
        const bool branch_taken_0x19bae0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x19bae0) {
            ctx->pc = 0x19BB08u;
            return;
        }
    }
    ctx->pc = 0x19BAE8u;
    // 0x19bae8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x19bae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19baec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x19baecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19baf0: 0xa4640094  sh          $a0, 0x94($v1)
    ctx->pc = 0x19baf0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 148), (uint16_t)GPR_U32(ctx, 4));
    // 0x19baf4: 0x3c033e19  lui         $v1, 0x3E19
    ctx->pc = 0x19baf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15897 << 16));
    // 0x19baf8: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x19baf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x19bafc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19bafcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19bb00: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x19bb00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19bb04: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x19bb04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    ctx->pc = 0x19bb08u;
}
