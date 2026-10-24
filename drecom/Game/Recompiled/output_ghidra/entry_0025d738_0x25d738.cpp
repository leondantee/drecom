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

// Function: entry_0025d738
// Address: 0x25d738 - 0x25d780
void entry_0025d738_0x25d738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025d738_0x25d738");
#endif

    switch (ctx->pc) {
        case 0x25d758u: goto label_25d758;
        default: break;
    }

    ctx->pc = 0x25d738u;

    // 0x25d738: 0x8fa50228  lw          $a1, 0x228($sp)
    ctx->pc = 0x25d738u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 552)));
    // 0x25d73c: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x25d73cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x25d740: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x25D740u;
    {
        const bool branch_taken_0x25d740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d740) {
            ctx->pc = 0x25D780u;
            return;
        }
    }
    ctx->pc = 0x25D748u;
    // 0x25d748: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x25d748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x25d74c: 0x26050300  addiu       $a1, $s0, 0x300
    ctx->pc = 0x25d74cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    // 0x25d750: 0xc040c9e  jal         func_103278
    ctx->pc = 0x25D750u;
    SET_GPR_U32(ctx, 31, 0x25D758u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x25D758u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25D758u) { return; }
    ctx->pc = 0x25D758u;
label_25d758:
    // 0x25d758: 0xc7a00100  lwc1        $f0, 0x100($sp)
    ctx->pc = 0x25d758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d75c: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x25d75cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x25d760: 0xc7a00104  lwc1        $f0, 0x104($sp)
    ctx->pc = 0x25d760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d764: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x25d764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x25d768: 0x97a30108  lhu         $v1, 0x108($sp)
    ctx->pc = 0x25d768u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x25d76c: 0xa7a30138  sh          $v1, 0x138($sp)
    ctx->pc = 0x25d76cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 312), (uint16_t)GPR_U32(ctx, 3));
    // 0x25d770: 0x93a20120  lbu         $v0, 0x120($sp)
    ctx->pc = 0x25d770u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x25d774: 0xa3a20150  sb          $v0, 0x150($sp)
    ctx->pc = 0x25d774u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 336), (uint8_t)GPR_U32(ctx, 2));
    // 0x25d778: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x25D778u;
    {
        const bool branch_taken_0x25d778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d778) {
            ctx->pc = 0x25D7B4u;
            return;
        }
    }
    ctx->pc = 0x25D780u;
}
