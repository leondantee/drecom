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

// Function: entry_002ce9f8
// Address: 0x2ce9f8 - 0x2ceae0
void entry_002ce9f8_0x2ce9f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ce9f8_0x2ce9f8");
#endif

    ctx->pc = 0x2ce9f8u;

    // 0x2ce9f8: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x2ce9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2ce9fc: 0x8c831350  lw          $v1, 0x1350($a0)
    ctx->pc = 0x2ce9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4944)));
    // 0x2cea00: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2cea00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2cea04: 0xac831350  sw          $v1, 0x1350($a0)
    ctx->pc = 0x2cea04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4944), GPR_U32(ctx, 3));
    // 0x2cea08: 0x146000a3  bnez        $v1, . + 4 + (0xA3 << 2)
    ctx->pc = 0x2CEA08u;
    {
        const bool branch_taken_0x2cea08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cea08) {
            ctx->pc = 0x2CEC98u;
            return;
        }
    }
    ctx->pc = 0x2CEA10u;
    // 0x2cea10: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2cea10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2cea14: 0x246586b0  addiu       $a1, $v1, -0x7950
    ctx->pc = 0x2cea14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936240));
    // 0x2cea18: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2cea18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2cea1c: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x2cea1cu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x3986B0u));
    // 0x2cea20: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x2cea20u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x2cea24: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2cea24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2cea28: 0x246586c0  addiu       $a1, $v1, -0x7940
    ctx->pc = 0x2cea28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936256));
    // 0x2cea2c: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x2cea2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2cea30: 0x78a40000  lq          $a0, 0x0($a1)
    ctx->pc = 0x2cea30u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x3986C0u));
    // 0x2cea34: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x2cea34u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x2cea38: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2cea38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2cea3c: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2cea3cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2cea40: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x2cea40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2cea44: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2cea44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2cea48: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x2cea48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2cea4c: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x2cea4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2cea50: 0x33200  sll         $a2, $v1, 8
    ctx->pc = 0x2cea50u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2cea54: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2cea54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2cea58: 0x8c257508  lw          $a1, 0x7508($at)
    ctx->pc = 0x2cea58u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x387508u));
    // 0x2cea5c: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x2cea5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2cea60: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x2cea60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2cea64: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2cea64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2cea68: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2cea68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2cea6c: 0x38202  srl         $s0, $v1, 8
    ctx->pc = 0x2cea6cu;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2cea70: 0xd01821  addu        $v1, $a2, $s0
    ctx->pc = 0x2cea70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x2cea74: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2cea74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2cea78: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2cea78u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2cea7c: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x2cea7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2cea80: 0x30b4000f  andi        $s4, $a1, 0xF
    ctx->pc = 0x2cea80u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x2cea84: 0x1420c0  sll         $a0, $s4, 3
    ctx->pc = 0x2cea84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x2cea88: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2cea88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2cea8c: 0x24658480  addiu       $a1, $v1, -0x7B80
    ctx->pc = 0x2cea8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935680));
    // 0x2cea90: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x2cea90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2cea94: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2cea94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cea98: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x2cea98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2cea9c: 0x10830068  beq         $a0, $v1, . + 4 + (0x68 << 2)
    ctx->pc = 0x2CEA9Cu;
    {
        const bool branch_taken_0x2cea9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2cea9c) {
            ctx->pc = 0x2CEC40u;
            return;
        }
    }
    ctx->pc = 0x2CEAA4u;
    // 0x2ceaa4: 0x1438c0  sll         $a3, $s4, 3
    ctx->pc = 0x2ceaa4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x2ceaa8: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2ceaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2ceaac: 0x24658480  addiu       $a1, $v1, -0x7B80
    ctx->pc = 0x2ceaacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935680));
    // 0x2ceab0: 0xa71821  addu        $v1, $a1, $a3
    ctx->pc = 0x2ceab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x2ceab4: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x2ceab4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ceab8: 0x28c40018  slti        $a0, $a2, 0x18
    ctx->pc = 0x2ceab8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x2ceabc: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CEABCu;
    {
        const bool branch_taken_0x2ceabc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ceabc) {
            ctx->pc = 0x2CEAE0u;
            return;
        }
    }
    ctx->pc = 0x2CEAC4u;
    // 0x2ceac4: 0x3c05bfc9  lui         $a1, 0xBFC9
    ctx->pc = 0x2ceac4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49097 << 16));
    // 0x2ceac8: 0x34a50fdb  ori         $a1, $a1, 0xFDB
    ctx->pc = 0x2ceac8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
    // 0x2ceacc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2ceaccu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cead0: 0x0  nop
    ctx->pc = 0x2cead0u;
    // NOP
    // 0x2cead4: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x2cead4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x2cead8: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2CEAD8u;
    {
        const bool branch_taken_0x2cead8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cead8) {
            ctx->pc = 0x2CEB3Cu;
            return;
        }
    }
    ctx->pc = 0x2CEAE0u;
}
