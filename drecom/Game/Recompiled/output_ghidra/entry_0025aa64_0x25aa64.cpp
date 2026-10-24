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

// Function: entry_0025aa64
// Address: 0x25aa64 - 0x25ab3c
void entry_0025aa64_0x25aa64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025aa64_0x25aa64");
#endif

    ctx->pc = 0x25aa64u;

    // 0x25aa64: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25aa64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25aa68: 0xa04009e7  sb          $zero, 0x9E7($v0)
    ctx->pc = 0x25aa68u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2535), (uint8_t)GPR_U32(ctx, 0));
    // 0x25aa6c: 0x33c2ffff  andi        $v0, $fp, 0xFFFF
    ctx->pc = 0x25aa6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)65535);
    // 0x25aa70: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x25aa70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x25aa74: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25aa74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25aa78: 0xac4309f8  sw          $v1, 0x9F8($v0)
    ctx->pc = 0x25aa78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2552), GPR_U32(ctx, 3));
    // 0x25aa7c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25aa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25aa80: 0x944209ec  lhu         $v0, 0x9EC($v0)
    ctx->pc = 0x25aa80u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2540)));
    // 0x25aa84: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25aa84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25aa88: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x25aa88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x25aa8c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25aa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25aa90: 0xac4309fc  sw          $v1, 0x9FC($v0)
    ctx->pc = 0x25aa90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2556), GPR_U32(ctx, 3));
    // 0x25aa94: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25aa94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25aa98: 0xa45e09ee  sh          $fp, 0x9EE($v0)
    ctx->pc = 0x25aa98u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2542), (uint16_t)GPR_U32(ctx, 30));
    // 0x25aa9c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25aa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25aaa0: 0xa44009f0  sh          $zero, 0x9F0($v0)
    ctx->pc = 0x25aaa0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2544), (uint16_t)GPR_U32(ctx, 0));
    // 0x25aaa4: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25aaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25aaa8: 0x944209ec  lhu         $v0, 0x9EC($v0)
    ctx->pc = 0x25aaa8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2540)));
    // 0x25aaac: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25aaacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25aab0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x25aab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x25aab4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25aab4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25aab8: 0x0  nop
    ctx->pc = 0x25aab8u;
    // NOP
    // 0x25aabc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x25aabcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x25aac0: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25aac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25aac4: 0xe44009d4  swc1        $f0, 0x9D4($v0)
    ctx->pc = 0x25aac4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 2516), bits); }
    // 0x25aac8: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x25aac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x25aacc: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25aaccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25aad0: 0xac4309f4  sw          $v1, 0x9F4($v0)
    ctx->pc = 0x25aad0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2548), GPR_U32(ctx, 3));
    // 0x25aad4: 0x97a30100  lhu         $v1, 0x100($sp)
    ctx->pc = 0x25aad4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x25aad8: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25aad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25aadc: 0xa44309e0  sh          $v1, 0x9E0($v0)
    ctx->pc = 0x25aadcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2528), (uint16_t)GPR_U32(ctx, 3));
    // 0x25aae0: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25aae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25aae4: 0x8c5409f8  lw          $s4, 0x9F8($v0)
    ctx->pc = 0x25aae4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2552)));
    // 0x25aae8: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25aae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25aaec: 0x944209e0  lhu         $v0, 0x9E0($v0)
    ctx->pc = 0x25aaecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2528)));
    // 0x25aaf0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25aaf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25aaf4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x25aaf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x25aaf8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x25AAF8u;
    {
        const bool branch_taken_0x25aaf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25aaf8) {
            ctx->pc = 0x25AB3Cu;
            return;
        }
    }
    ctx->pc = 0x25AB00u;
    // 0x25ab00: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x25ab00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x25ab04: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x25ab04u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x25ab08: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x25ab08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25ab0c: 0x8c6209fc  lw          $v0, 0x9FC($v1)
    ctx->pc = 0x25ab0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2556)));
    // 0x25ab10: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x25ab10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x25ab14: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x25AB14u;
    {
        const bool branch_taken_0x25ab14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25ab14) {
            ctx->pc = 0x25AB70u;
            return;
        }
    }
    ctx->pc = 0x25AB1Cu;
    // 0x25ab1c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25ab1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25ab20: 0x8c4209fc  lw          $v0, 0x9FC($v0)
    ctx->pc = 0x25ab20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2556)));
    // 0x25ab24: 0x282a023  subu        $s4, $s4, $v0
    ctx->pc = 0x25ab24u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x25ab28: 0x24170002  addiu       $s7, $zero, 0x2
    ctx->pc = 0x25ab28u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25ab2c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25ab2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25ab30: 0xa05709e7  sb          $s7, 0x9E7($v0)
    ctx->pc = 0x25ab30u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2535), (uint8_t)GPR_U32(ctx, 23));
    // 0x25ab34: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x25AB34u;
    {
        const bool branch_taken_0x25ab34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ab34) {
            ctx->pc = 0x25AB70u;
            return;
        }
    }
    ctx->pc = 0x25AB3Cu;
}
