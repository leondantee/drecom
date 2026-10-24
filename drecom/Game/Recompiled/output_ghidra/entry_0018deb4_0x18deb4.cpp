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

// Function: entry_0018deb4
// Address: 0x18deb4 - 0x18df2c
void entry_0018deb4_0x18deb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018deb4_0x18deb4");
#endif

    switch (ctx->pc) {
        case 0x18df18u: goto label_18df18;
        default: break;
    }

    ctx->pc = 0x18deb4u;

    // 0x18deb4: 0xae1400c4  sw          $s4, 0xC4($s0)
    ctx->pc = 0x18deb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 20));
    // 0x18deb8: 0x93a20098  lbu         $v0, 0x98($sp)
    ctx->pc = 0x18deb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x18debc: 0xa20200e2  sb          $v0, 0xE2($s0)
    ctx->pc = 0x18debcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 226), (uint8_t)GPR_U32(ctx, 2));
    // 0x18dec0: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x18dec0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x18dec4: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x18dec4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x18dec8: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x18dec8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x18decc: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x18deccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x18ded0: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x18ded0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
    // 0x18ded4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18ded4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18ded8: 0x0  nop
    ctx->pc = 0x18ded8u;
    // NOP
    // 0x18dedc: 0xe60000d8  swc1        $f0, 0xD8($s0)
    ctx->pc = 0x18dedcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 216), bits); }
    // 0x18dee0: 0xa20000d0  sb          $zero, 0xD0($s0)
    ctx->pc = 0x18dee0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 208), (uint8_t)GPR_U32(ctx, 0));
    // 0x18dee4: 0xae0000cc  sw          $zero, 0xCC($s0)
    ctx->pc = 0x18dee4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 0));
    // 0x18dee8: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x18dee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x18deec: 0xae0200c0  sw          $v0, 0xC0($s0)
    ctx->pc = 0x18deecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
    // 0x18def0: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x18def0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x18def4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x18DEF4u;
    {
        const bool branch_taken_0x18def4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18def4) {
            ctx->pc = 0x18DF2Cu;
            return;
        }
    }
    ctx->pc = 0x18DEFCu;
    // 0x18defc: 0x960200e0  lhu         $v0, 0xE0($s0)
    ctx->pc = 0x18defcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x18df00: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x18df00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x18df04: 0xa60200e0  sh          $v0, 0xE0($s0)
    ctx->pc = 0x18df04u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 224), (uint16_t)GPR_U32(ctx, 2));
    // 0x18df08: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x18df08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x18df0c: 0x8e0500c0  lw          $a1, 0xC0($s0)
    ctx->pc = 0x18df0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x18df10: 0xc040ca2  jal         func_103288
    ctx->pc = 0x18DF10u;
    SET_GPR_U32(ctx, 31, 0x18DF18u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x18DF18u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x18DF18u) { return; }
    ctx->pc = 0x18DF18u;
label_18df18:
    // 0x18df18: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x18DF18u;
    {
        const bool branch_taken_0x18df18 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x18df18) {
            ctx->pc = 0x18DF2Cu;
            return;
        }
    }
    ctx->pc = 0x18DF20u;
    // 0x18df20: 0x960200e0  lhu         $v0, 0xE0($s0)
    ctx->pc = 0x18df20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x18df24: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x18df24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x18df28: 0xa60200e0  sh          $v0, 0xE0($s0)
    ctx->pc = 0x18df28u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 224), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x18df2cu;
}
