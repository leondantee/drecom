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

// Function: entry_00125188
// Address: 0x125188 - 0x1251c0
void entry_00125188_0x125188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00125188_0x125188");
#endif

    ctx->pc = 0x125188u;

    // 0x125188: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x125188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x12518c: 0xa6020082  sh          $v0, 0x82($s0)
    ctx->pc = 0x12518cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 130), (uint16_t)GPR_U32(ctx, 2));
    // 0x125190: 0x240200c9  addiu       $v0, $zero, 0xC9
    ctx->pc = 0x125190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 201));
    // 0x125194: 0xa6020084  sh          $v0, 0x84($s0)
    ctx->pc = 0x125194u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 132), (uint16_t)GPR_U32(ctx, 2));
    // 0x125198: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x125198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x12519c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x12519cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x1251a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1251a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1251a4: 0x0  nop
    ctx->pc = 0x1251a4u;
    // NOP
    // 0x1251a8: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x1251a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x1251ac: 0x3c0237a7  lui         $v0, 0x37A7
    ctx->pc = 0x1251acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14247 << 16));
    // 0x1251b0: 0x3442c5ac  ori         $v0, $v0, 0xC5AC
    ctx->pc = 0x1251b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)50604);
    // 0x1251b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1251b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1251b8: 0x0  nop
    ctx->pc = 0x1251b8u;
    // NOP
    // 0x1251bc: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x1251bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    ctx->pc = 0x1251c0u;
}
